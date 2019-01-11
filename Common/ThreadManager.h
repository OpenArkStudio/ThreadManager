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

    //�����̶߳���
    int CreateThread(ThreadId threadID, Thread_Run fn_Thread_Run, Thread_State_Change fn_Thread_State_Change);

    //��ֹ�߳�
    int KillThread(ThreadId threadID);

    //�����߳�
    int HangUpThread(ThreadId threadID);

    //�����߳�
    int ResumeThread(ThreadId threadID);

    //���õ�ǰ�߳�״̬
    void SetThreadSate(ThreadId threadID, EMUN_THREAD_STATE em_State);

    //�õ��߳�״̬
    EMUN_THREAD_STATE GetThreadSate(ThreadId threadID);

private:
    typedef map<ThreadId, CThreadInfo*> mapThreadList;
    int            m_MaxThreadCount;                  //�̳߳��������̸߳���
    mapThreadList  m_ThreadList;                      //��ǰ�߳��б�
};

#endif
