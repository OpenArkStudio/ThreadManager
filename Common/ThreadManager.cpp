#include "ThreadManager.h"

CTimerManager::CTimerManager()
{
    m_MaxThreadCount = 0;
}

CTimerManager::~CTimerManager()
{

}

void CTimerManager::Init(int MaxThreadCount)
{
    m_MaxThreadCount = MaxThreadCount;
}

int CTimerManager::CreateThread(ThreadId threadID, Thread_Run fn_Thread_Run, Thread_State_Change fn_Thread_State_Change)
{
    return 0;
}

int CTimerManager::KillThread(ThreadId threadID)
{
    return 0;
}

int CTimerManager::HangUpThread(ThreadId threadID)
{
    return 0;
}

int CTimerManager::ResumeThread(ThreadId threadID)
{
    return 0;
}

void CTimerManager::SetThreadState(ThreadId threadID, EMUN_THREAD_STATE em_State)
{

}

EMUN_THREAD_STATE CTimerManager::GetThreadSate(ThreadId threadID)
{
    return EMUN_THREAD_STATE::THREAD_STATE_NO_EXIST;
}
