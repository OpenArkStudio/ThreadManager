#include "ThreadInfo.h"

CThreadInfo::CThreadInfo()
{
    m_fn_Thread_State_Change = NULL;
    m_fn_Thread_Run          = NULL;
}

CThreadInfo::~CThreadInfo()
{

}
