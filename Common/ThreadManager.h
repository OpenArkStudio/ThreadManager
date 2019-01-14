#ifndef _THREADMANAGER_H
#define _THREADMANAGER_H

#include <map>
#include "ThreadInfo.h"

using namespace std;

class CTimerManager
{
public:
    CTimerManager();
    ~CTimerManager();

    void Init(int MaxThreadCount);

    //创建线程对象
    int CreateThread(ThreadId threadID, Thread_Run fn_Thread_Run, Thread_State_Change fn_Thread_State_Change);

    //终止线程
    int KillThread(ThreadId threadID);

    //挂起线程
    int HangUpThread(ThreadId threadID);

    //唤醒线程
    int ResumeThread(ThreadId threadID);

    //设置当前线程状态
    void SetThreadState(ThreadId threadID, EMUN_THREAD_STATE em_State);

    //得到线程状态
    EMUN_THREAD_STATE GetThreadSate(ThreadId threadID);

private:
    typedef map<ThreadId, CThreadInfo*> mapThreadList;
    int            m_MaxThreadCount;                  //线程池中最大的线程个数
    mapThreadList  m_ThreadList;                      //当前线程列表
};

#endif
