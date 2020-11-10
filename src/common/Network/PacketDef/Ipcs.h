#ifndef _CORE_NETWORK_PACKETS_IPCS_H
#define _CORE_NETWORK_PACKETS_IPCS_H

#include <stdint.h>

namespace Sapphire::Network::Packets
{

  ////////////////////////////////////////////////////////////////////////////////
  /// Lobby Connection IPC Codes
  /**
  * Server IPC Lobby Type Codes.
  */
  enum ServerLobbyIpcType : uint16_t
  {
    LobbyError = 0x0002,
    LobbyServiceAccountList = 0x000C,
    LobbyCharList = 0x000D,
    LobbyCharCreate = 0x000E,
    LobbyEnterWorld = 0x000F,
    LobbyServerList = 0x0015,
    LobbyRetainerList = 0x0017,

  };

  /**
  * Client IPC Lobby Type Codes.
  */
  enum ClientLobbyIpcType : uint16_t
  {
    ReqCharList = 0x0003,
    ReqEnterWorld = 0x0004,
    ClientVersionInfo = 0x0005,

    ReqCharDelete = 0x000A,
    ReqCharCreate = 0x000B,
  };

  ////////////////////////////////////////////////////////////////////////////////
  /// Zone Connection IPC Codes
  /**
  * Server IPC Zone Type Codes.
  */
  enum ServerZoneIpcType : uint16_t
  {
       ActorCast = 0x0166,
        ActorControl = 0x038F,
        ActorControlSelf = 0x028B,
        ActorGauge = 0x0302,
        ActorMove = 0x01E5,
        ActorSetPos = 0x0323,
        AddStatusEffect = 0x0379,
        AoeEffect16 = 0x00b1,
        AoeEffect24 = 0x0382,
        AoeEffect32 = 0x00d5,
        AoeEffect8 = 0x02d1,
        BossStatusEffectList = 0x0133,
        CFNotify = 0x02A6,
        CFPreferredRole = 0x0253,
        Chat = 0x0106,
        ContainerInfo = 0x013b,
        CurrencyCrystalInfo = 0x03AD,
        DirectorStart = 0x0087,
        Effect = 0x02D6,
        EventFinish = 0x01BA,
        EventPlay = 0x0297,
        EventPlay4 = 0x03B0,
        EventPlay32 = 0x00a3,
        EventStart = 0x02E2,
        Examine = 0x025E,
        ExamineSearchInfo = 0x01A8,
        GroupMessage = 0x0065,
        InitZone = 0x0242,
        InventoryActionAck = 0x03da,
        InventoryTransaction = 0x01de,
        InventoryTransactionFinish = 0x01fe,
        ItemInfo = 0x028C,
        MarketBoardItemListing = 0x021F,
        MarketBoardItemListingCount = 0x00AD,
        MarketBoardItemListingHistory = 0x03BE,
        MarketBoardSearchResult = 0x02B9,
        MarketTaxRates = 0x037A,
        NpcSpawn = 0x0142,
        NpcSpawn2 = 0x0342,
        ObjectSpawn = 0x00FD,
        PlayerSetup = 0x0066,
        PlayerSpawn = 0x035E,
        PlayerStats = 0x02D3,
        Playtime = 0x0324,
        RetainerInformation = 0x01D4,
        SomeDirectorUnk4 = 0x017C,
        StatusEffectList = 0x0291,
        UpdateClassInfo = 0x0199,
        UpdateHpMpTp = 0x016B,
        UpdateInventorySlot = 0x00A2,
        UpdateSearchInfo = 0x0185,
  };

  /**
  * Client IPC Zone Type Codes.
  */
  enum ClientZoneIpcType : uint16_t
  {

     ChatHandler = 0x006A,
        ClientTrigger = 0x01FA,
        InventoryModifyHandler = 0x02f1,
        SetSearchInfoHandler = 0x013A,

  };

  ////////////////////////////////////////////////////////////////////////////////
  /// Chat Connection IPC Codes
  /**
  * Server IPC Chat Type Codes.
  */
  enum ServerChatIpcType : uint16_t
  {
    Tell = 0x0064, // updated for sb
    TellErrNotFound = 0x0066,

    FreeCompanyEvent = 0x012C, // added 5.0
  };

  /**
  * Client IPC Chat Type Codes.
  */
  enum ClientChatIpcType : uint16_t
  {
    TellReq = 0x0064,
  };


}

#endif /*_CORE_NETWORK_PACKETS_IPCS_H*/
