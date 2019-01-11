#ifndef _THREADINFO_H
#define _THREADINFO_H

#include <stdio.h>

//����ö��
//�߳�״̬ö��
enum EMUN_THREAD_STATE
{
    THREAD_STATE_NO_EXIST = 0,  //�̲߳�����
    THREAD_STATE_INIT,          //�̳߳�ʼ��
    THREAD_STATE_CREATE,        //�̴߳���
    THREAD_STATE_HANGUP,        //�̹߳���
    THREAD_STATE_BEGIN,         //�̵߳�ǰִ������ʼ
    THREAD_STATE_END,           //�̵߳�ǰִ���������
    THREAD_STATE_ERROR,         //�߳����д���
};

typedef unsigned __int32 ThreadId;
typedef unsigned __int64 threadtime;
typedef void(*Thread_State_Change)(EMUN_THREAD_STATE em_State);
typedef void* (*Thread_Run)(void* arg);


//�̵߳Ļ���
class CThreadInfo
{
public:
    CThreadInfo();
    ~CThreadInfo();

private:
    ThreadId            m_ThreadID;                   //�߳�ID
    EMUN_THREAD_STATE   m_ThreadSate;                 //�̵߳�ǰ״̬
    threadtime          m_ThreadStateTime;            //�߳�״̬�л�ʱ��
    threadtime          m_ThreadCreateTime;           //�̴߳���ʱ��
    Thread_State_Change m_fn_Thread_State_Change;     //�߳�״̬�ı�ص��ӿ�
    Thread_Run          m_fn_Thread_Run;              //�߳����нӿ�
};

#endif
