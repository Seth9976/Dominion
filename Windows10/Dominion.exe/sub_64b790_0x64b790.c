// 函数: sub_64b790
// 地址: 0x64b790
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg2 != 0)
    return sub_63b5f0("There has been an IO Failure when requesting the Encrypted App Ticket.")

uint32_t eax_3 = *arg1 - 1

if (eax_3 u<= 0x1c)
    eax_3 = zx.d(lookup_table_64b854[eax_3])
    
    switch (eax_3)
        case 0
            char eax_7 =
                (*(**SteamInternal_ContextInit(&data_cb4530) + 0x58))(0xc2100c, 0x400, &data_c2140c)
            
            if (eax_7 == 0)
                return sub_63b5f0("GetEncryptedAppTicket failed.")
            
            data_c21410 = 1
            return eax_7
        case 1
            return sub_63b5f0("Calling RequestEncryptedAppTicket while not connected to steam.")
        case 2
            return sub_63b5f0("Calling RequestEncryptedAppTicket more than once per minute.")
        case 3
            return sub_63b5f0("
                Calling RequestEncryptedAppTicket while there is already a pending request.")

return eax_3
