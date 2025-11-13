// 函数: _ZN5Botan3TLS15Handshake_State18new_session_ticketEPNS0_18New_Session_TicketE
// 地址: 0xe6b15c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** x20 = *(arg1 + 0x150)
int64_t entry_x1
*(arg1 + 0x150) = entry_x1

if (x20 != 0)
    void* x0 = x20[2]
    *x20 = _vtable_for_Botan::TLS::New_Session_Ticket + 0x10
    
    if (x0 != 0)
        x20[3] = x0
        operator delete(x0)
    
    operator delete(x20)
    *(arg1 + 0x150)

jump(*(**(arg1 + 8) + 0x70))
