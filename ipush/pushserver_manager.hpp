#ifndef __pushserver_manager.hpp__
#define __pushserver_manager.hpp__

#include <random>
#include <vector>
#include <map>
#include "clientbase.h"
class CPushHandler;

class CAppPushserverManager
{

public:

	CAppPushserverManager()
	{
	}
	~CAppPushserverManager()
	{
	}

	static CAppPushserverManager *GetInstance()
	{
		static CAppPushserverManager AppManager;
		return &AppManager;
	}

	bool RegistClient(CClientBase *Client)
	{
		if (!Client)
		{
			ErrLog("Err RegistClient!");
			return false;
		}

		m_clients[Client->getClientType()] = Client;

		return true;
	}

	bool RegistSvr(CPushHandler *Svr)
	{
		if (!Svr)
		{
			ErrLog("Err RegistSvr!");
			return false;
		}

		bool bContains = false;
		for (unsigned int i = 0; i < m_apnsPushSvrs.size();++i)
		{
			if (m_apnsPushSvrs[i] == Svr)
			{
				bContains = true;
				break;
			}
		}

		if (!bContains)
		{
			m_apnsPushSvrs.push_back(Svr);
		}

		return true;
	}
	
	CClientBase *GetClient(PUSH_CLIENT_TYPE clientType)
	{
		std::map<PUSH_CLIENT_TYPE, CClientBase*>::iterator iter = m_clients.find(clientType);
		if (iter != m_clients.end())
		{
			return iter->second;
		}
		return NULL;
	}

	CPushHandler *GetServer(int index = -1)
	{
		if (m_apnsPushSvrs.empty()) return NULL;

		static std::random_device rd;
		index = (-1 == index ? rd() : (uint32_t)index) % m_apnsPushSvrs.size();
		return m_apnsPushSvrs[index];
	}

private:
	std::map<PUSH_CLIENT_TYPE, CClientBase*>   m_clients;
	std::vector<CPushHandler*> m_apnsPushSvrs;
};


#endif
