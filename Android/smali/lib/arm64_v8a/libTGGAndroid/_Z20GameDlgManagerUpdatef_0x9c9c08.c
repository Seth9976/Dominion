// 函数: _Z20GameDlgManagerUpdatef
// 地址: 0x9c9c08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v8 = arg1

for (int64_t i = 0; i != 0x1b8; i += 0x28)
    int32_t* x19_1 = gGameDlgManager + i
    int32_t x9_1 = *x19_1
    
    if (x9_1 == 0)
        goto label_9c9c78
    
    int32_t x24_1
    GameDlg* x19_2
    
    if (x9_1 != x19_1[1])
        void* x24_2 = gGameDlgManager + i
        int32_t x8_5 = *(x24_2 + 0x14)
        
        if (x9_1 != x8_5)
            int64_t (* x8_6)(UI2Handle arg1)
            
            if (x8_5 u> 0x26)
            label_9c9d64:
                x8_6 = *(GameSpecific_GetDlgDef(zx.q(x8_5)) + 0x30)
                
                if (x8_6 != 0)
                    x8_6(zx.q(*(gGameDlgManager + i + 0x18)))
            else
                void* const x0_3 = &data_1122a50
                
                switch (x8_5)
                    case 7, 0xa, 0xb, 0x12, 0x14, 0x1f, 0x23, 0x24, 0x25
                        goto label_9c9d64
                    case 0x10
                        GameCreateGameDispose(zx.q(*(gGameDlgManager + i + 0x18)))
                    case 0x13
                        goto label_9c9f08
                    case 0x22
                        x0_3 = &data_1123070
                    label_9c9f08:
                        x8_6 = *(x0_3 + 0x30)
                        
                        if (x8_6 != 0)
                            x8_6(zx.q(*(gGameDlgManager + i + 0x18)))
            GameSepcific_DlgEvict(zx.q(*(x24_2 + 0x14)))
            void* x24_3 = gGameDlgManager + i
            UI2Free(x24_3 + 0x18)
            *(x24_3 + 0x14) = *(x24_3 + 4)
            x19_1[1] = *x19_1
            int32_t x8_8 = *(x24_3 + 0x24)
            *(x24_3 + 0x10) = 0
            *(x24_3 + 8) = 0
            *(x24_3 + 0xc) = x8_8
            *(x24_3 + 0x24) = x8_8 + 1
        else
            arg1 = (*(x24_2 + 4)).d
            int128_t var_50_1 = arg1.o
            *(x24_2 + 4) = *(x24_2 + 0x14)
            *(x24_2 + 0x10) = 0
            *(x24_2 + 0x14) = arg1.o
        
        x24_1 = 1
        *x19_1 = 0
        x19_2 = &x19_1[5]
        
        if (*x19_2 == 0x27)
            UI2Free(gGameDlgManager + i + 0x18)
        else
            GameDlgUpdate(x19_2, true, v8)
    else
        *x19_1 = 0
        UI2AutoFocusTextbox(zx.q(*(gGameDlgManager + i + 8)))
    label_9c9c78:
        x24_1 = 0
        x19_2 = &x19_1[5]
        
        if (*x19_2 != 0x27)
            GameDlgUpdate(x19_2, true, v8)
        else
            UI2Free(gGameDlgManager + i + 0x18)
    void* x19_3 = gGameDlgManager + i
    GameDlgUpdate(x19_3 + 4, false, v8)
    
    if (x24_1 != 0)
        UI2AutoFocusTextbox(zx.q(*(x19_3 + 8)))

uint64_t x0_12 = zx.q(*(gGameDlgManager + 0x120))

if (x0_12.d == 0)
    int64_t result = UI2SetDialog(zx.q(*(gGameDlgManager + 0xd0)))
    
    if (*(gGameDlgManager + 0xd0) != 0)
        return result
    
    x0_12 = zx.q(*(gGameDlgManager + 0x30))

return UI2SetDialog(x0_12) __tailcall
