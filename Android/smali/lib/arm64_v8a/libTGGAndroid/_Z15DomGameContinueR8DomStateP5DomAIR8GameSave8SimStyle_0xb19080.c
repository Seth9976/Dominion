// 函数: _Z15DomGameContinueR8DomStateP5DomAIR8GameSave8SimStyle
// 地址: 0xb19080
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t fp

if (*(arg1 + 0x24) == 0)
    fp = 0
else
    int32_t x24_1 = arg4
    fp = 0
    
    while (zx.d(*(arg1 + 0x1a0c)) == 0)
        uint64_t x28_1
        int32_t i
        
        do
            if (zx.d(*(gDomClient + 0x20)) == 0
                    && (DomLogReadAction(LogGet(arg3, zx.q(*(arg1 + 0x78))), arg1 + 0x20) & 1)
                    != 0)
                int32_t x0_6
                
                do
                    *(arg1 + 0x150c) = x24_1
                    co_resume(arg1 + 0x60d20)
                    fp = 1
                    
                    if (*(arg1 + 0x1a28) != 0)
                        return zx.q(fp) & 1
                    
                    if (zx.d(*(arg1 + 0x1a0c)) != 0)
                        return zx.q(fp) & 1
                    
                    if (zx.d(*(gDomClient + 0x20)) != 0)
                        break
                    
                    x0_6 = DomLogReadAction(LogGet(arg3, zx.q(*(arg1 + 0x78))), arg1 + 0x20)
                while ((x0_6 & 1) != 0)
                fp = 1
            
            x28_1 = sx.q(*(arg1 + 0x78))
            int64_t (* x25_1)()
            
            if (x28_1.d == 0xffffffff)
                x25_1 = gDomClient + 0x48
            else
                x25_1 = gDomClient + 0x48 + x28_1 * 0x4d48
            
            int64_t (* x23_1)() = x25_1 + 0x4098
            i = *x23_1
            
            if (i == 0)
                break
            
            do
                memcpy(arg1 + 0x20, x25_1 + 0x1938, 0xd20)
                memmove(x25_1 + 0x1938, x25_1 + 0x2658, sx.q(*x23_1) * 0xd20 - 0xd20)
                *x23_1 -= 1
                LogAdd(arg3, zx.q(x28_1.d), arg1 + 0x20)
                DomLogReadAction(LogGet(arg3, zx.q(x28_1.d)), arg1 + 0x20)
                *(arg1 + 0x150c) = x24_1
                co_resume(arg1 + 0x60d20)
                fp = 1
                
                if (*(arg1 + 0x1a28) != 0)
                    return zx.q(fp) & 1
                
                if (zx.d(*(arg1 + 0x1a0c)) != 0)
                    return zx.q(fp) & 1
                
                x28_1 = sx.q(*(arg1 + 0x78))
                
                if (x28_1.d == 0xffffffff)
                    x25_1 = gDomClient + 0x48
                else
                    x25_1 = gDomClient + 0x48 + x28_1 * 0x4d48
                
                x23_1 = x25_1 + 0x4098
            while (*x23_1 != 0)
            
            fp = 1
        while (i != 0)
        
        if (*(gDomClient + 0x2c) != x28_1.d && zx.d(*(arg1 + 0x1a0c)) == 0)
            if (x28_1.d == LocalWho() && *(gDomClient + 0x30) == *(arg1 + 0x19d8))
                int32_t x22_1 = *(arg1 + 0x74)
                int32_t x23_2 = *(arg1 + 0x19d4)
                int32_t x0_14 = IsPassAndPlay()
                
                if (x22_1 != x23_2)
                    if ((x0_14 & 1) == 0)
                        DomSoundGameMessage(zx.q(*(arg1 + 0x78)), 2)
                else if ((x0_14 & 1) == 0)
                    DomSoundGameMessage(zx.q(*(arg1 + 0x78)), 3)
            
            x28_1 = zx.q(*(arg1 + 0x78))
            int32_t x8_19 = *(arg1 + 0x19d8)
            *(gDomClient + 0x2c) = x28_1.d
            *(gDomClient + 0x30) = x8_19
        
        GameSave* x0_23
        uint64_t x1_13
        int32_t var_88
        
        if (*(GameGetPlayer(arg3 + 8, zx.q(x28_1.d)) + 0x14) != 3)
            int32_t i_1 = *(arg1 + 0x78)
            
            if (zx.d(*gAllPlayersAI) == 0)
                uint64_t x9_8 = zx.q(*(arg3 + 0x11b4))
                void* __offset(GameSave, 0x70) x10_5
                
                if (x9_8.d s< 1)
                label_b19490:
                    pthread_kill(pthread_self(), 6)
                    i_1, x10_5 = XNoReturn()
                else
                    x10_5 = arg3 + 0x70
                    
                    while (*x10_5 != i_1)
                        uint64_t temp0_1 = x9_8
                        x9_8 -= 1
                        x10_5 += 0x22c
                        
                        if (temp0_1 == 1)
                            goto label_b19490
                
                if (*(x10_5 - 8) == 1)
                    int32_t x9_10 = *(arg1 + 0x1a28)
                    var_88 = 0
                    int32_t var_84_2 = x9_10
                    int32_t x9_11 = *(arg1 + 0x19d4)
                    int32_t var_80_2 = x9_11
                    int32_t i_2 = i_1
                    int64_t var_78
                    var_78.d = *(arg1 + 0x19ec)
                    var_78:4.d = (*(arg1 + 0x19e8) - 1) s/ *(arg1 + 0xd40) + 1
                    
                    if (x9_11 != i_1 || (zx.d(*(arg1 + 0x70)) & 8) != 0)
                        var_78.d = 0xffffffff
                    
                    ClientSendWaitingMessage(zx.q(*arg3), &var_88)
                
                break
            
            DomAIAction(arg2 + sx.q(i_1) * 0x18, arg1, arg1 + 0x20)
            x1_13 = zx.q(*(arg1 + 0x78))
            x0_23 = arg3
        else if (zx.d(*(gDomClient + 0x20)) != 0)
            if ((co_async_complete(gDomClient) & 1) == 0)
                break
            
            *(gDomClient + 0x20) = 0
            int32_t x8_27 = *(GetClient() + 0x5068)
            int32_t x21_2 = *(arg1 + 0x78)
            
            if (x8_27 == 2)
                PlayerLog* x0_28 = LogGet(arg3, zx.q(x21_2))
                *(x0_28 + 0x10)
                XTrace("submit network action who:%d pos:%d")
                void* x0_29 = GetClient()
                GameGetPlayer(arg3 + 8, zx.q(x21_2))
                int64_t x22_2 = sx.q(*(x0_28 + 0x10))
                DomLogWriteAction(x0_28, arg1 + 0x20)
                int32_t x9_6 = *(x0_28 + 0x10)
                int64_t x10_3 = *x0_28
                int32_t x12_1 = *(x0_29 + 0xc) + 1
                *(x0_29 + 0xc) = x12_1
                int32_t x11_1 = *arg3
                int32_t var_80_1 = x21_2
                int32_t var_7c_1 = x22_2.d
                int64_t var_78_1 = x10_3 + x22_2
                int32_t var_70_1 = x9_6 - x22_2.d
                int32_t var_6c_1 = 2
                var_88 = x12_1
                int32_t var_84_1 = x11_1
                int32_t var_68_1 = *(arg1 + 0x20)
                NetworkSendDef(zx.q(*(x0_29 + 0x14)), 0xf42b0, *defMapGameMoveMsg, &var_88)
                break
            
            x0_23 = arg3
            x1_13 = zx.q(x21_2)
        else
            if (*gDomClient == 0)
                *gDomClient = co_call(DomAIAction_async, gDomClient + 8)
            
            fp = 1
            int64_t x8_24 = arg2 + sx.q(*(arg1 + 0x78)) * 0x18
            *(gDomClient + 0x10) = arg1
            *(gDomClient + 0x18) = arg1 + 0x20
            *(gDomClient + 8) = x8_24
            *(gDomClient + 0x20) = 1
            co_resume_async(gDomClient)
            
            if (*(arg1 + 0x24) == 0)
                break
            
            continue
        LogAdd(x0_23, x1_13, arg1 + 0x20)
        break

return zx.q(fp) & 1
