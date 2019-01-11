#ifndef _THREADINFO_H
#define _THREADINFO_H

#include <stdio.h>

//定义枚举
//线程状态枚举
enum EMUN_THREAD_STATE
{
    THREAD_STATE_NO_EXIST = 0,  //线程不存在
    THREAD_STATE_INIT,          //线程初始化
    THREAD_STATE_CREATE,        //线程创建
    THREAD_STATE_HANGUP,        //线程挂起
    THREAD_STATE_BEGIN,         //线程当前执行任务开始
    THREAD_STATE_END,           //线程当前执行任务完毕
    THREAD_STATE_ERROR,         //线程运行错误
};

typedef unsigned __int32 ThreadId;
typedef unsigned __int64 threadtime;
typedef void(*Thread_State_Change)(EMUN_THREAD_STATE em_State);
typedef void* (*Thread_Run)(void* arg);


//线程的基类
class CThreadInfo
{
public:
    CThreadInfo();
    ~CThreadInfo();

private:
    ThreadId            m_ThreadID;                   //线程ID
    EMUN_THREAD_STATE   m_ThreadSate;                 //线程当前状态
    threadtime          m_ThreadStateTime;            //线程状态切换时间
    threadtime          m_ThreadCreateTime;           //线程创建时间
    Thread_State_Change m_fn_Thread_State_Change;     //线程状态改变回调接口
    Thread_Run          m_fn_Thread_Run;              //线程运行接口
};

#endif
