// 函数: _Z14UpdateGameList9UI2HandleP11UI2SelectorPKci12GameDescType
// 地址: 0x9c2e30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg5
int32_t x19 = arg1.d

if (arg4 s>= 1)
    uint64_t x28_1 = zx.q(arg4)
    int64_t x23_1 = 0
    int32_t* fp_1 = arg2 + 0x38
    
    if (x21 == 1)
        do
            if (*(fp_1 - 0x30) == arg3 && fp_1[-0xe] == x19 && x23_1 == zx.q(fp_1[-0xa])
                    && *(fp_1 - 0x20) == 0)
                arg1 = UI2Exists(zx.q(*fp_1))
            
            int32_t x25_1
            
            if (*(fp_1 - 0x30) != arg3 || fp_1[-0xe] != x19 || x23_1 != zx.q(fp_1[-0xa])
                    || *(fp_1 - 0x20) != 0 || (arg1.d & 1) == 0)
                arg1 = UI2GetHandle(zx.q(x19), arg3, x23_1.d)
                x25_1 = arg1.d
                *fp_1 = arg1.d
                
                if (arg1.d != 0)
                    *(fp_1 - 0x30) = arg3
                    fp_1[-0xe] = x19
                    fp_1[-0xa] = x23_1.d
                    *(fp_1 - 0x20) = 0
            else
                x25_1 = *fp_1
            
            int32_t x8_6 = x23_1.d + *(gMultiplayerDlg + 8) * arg4
            
            if (*(gMultiplayerDlg + 0x190) s> x8_6)
                arg1 = zx.q(*(gMultiplayerDlg + (sx.q(x8_6) << 2) + 0x110))
            
            if (*(gMultiplayerDlg + 0x190) s> x8_6 && arg1.d != 0)
                arg1 = GetMultplayerGameByIndex(arg1)
                
                if (x25_1 != 0)
                    int32_t* x2_1 = arg1
                    DisplayNetworkGame(zx.q(x25_1), zx.q(*x2_1), &x2_1[2], 1)
            else if (x25_1 != 0)
                UI2SetState(zx.q(x25_1), &data_11cf4b8, 0xffffffff, 0)
            
            x23_1 += 1
            fp_1 = &fp_1[0x10]
        while (x28_1 != x23_1)
    else
        do
            if (*(fp_1 - 0x30) == arg3 && fp_1[-0xe] == x19 && x23_1 == zx.q(fp_1[-0xa])
                    && *(fp_1 - 0x20) == 0)
                arg1 = UI2Exists(zx.q(*fp_1))
            
            int32_t x25_2
            
            if (*(fp_1 - 0x30) != arg3 || fp_1[-0xe] != x19 || x23_1 != zx.q(fp_1[-0xa])
                    || *(fp_1 - 0x20) != 0 || (arg1.d & 1) == 0)
                arg1 = UI2GetHandle(zx.q(x19), arg3, x23_1.d)
                x25_2 = arg1.d
                *fp_1 = arg1.d
                
                if (arg1.d != 0)
                    *(fp_1 - 0x30) = arg3
                    fp_1[-0xe] = x19
                    fp_1[-0xa] = x23_1.d
                    *(fp_1 - 0x20) = 0
            else
                x25_2 = *fp_1
            
            int32_t x8_13 = x23_1.d + *(gMultiplayerDlg + 8) * arg4
            
            if (*(gMultiplayerDlg + 0x10c) s> x8_13)
                arg1 = zx.q(*(gMultiplayerDlg + (sx.q(x8_13) << 2) + 0xc))
            
            if (*(gMultiplayerDlg + 0x10c) s> x8_13 && arg1.d != 0)
                arg1 = GetMultplayerGameByIndex(arg1)
                
                if (x25_2 != 0)
                    int32_t* x2_4 = arg1
                    DisplayNetworkGame(zx.q(x25_2), zx.q(*x2_4), &x2_4[2], zx.q(x21))
            else if (x25_2 != 0)
                UI2SetState(zx.q(x25_2), &data_11cf4b8, 0xffffffff, 0)
            
            x23_1 += 1
            fp_1 = &fp_1[0x10]
        while (x28_1 != x23_1)

int32_t x8_17 = (arg4 - 1 + *(gMultiplayerDlg + 0x190)) s/ arg4
int32_t x22_2

x22_2 = x8_17 s> 1 ? x8_17 : 1

int32_t x8_18

if (x21 == 0)
    int32_t x8_22 = (arg4 - 1 + *(gMultiplayerDlg + 0x10c)) s/ arg4
    
    x22_2 = x8_22 s> 1 ? x8_22 : 1
    
    x8_18 = *(gMultiplayerDlg + 8)
    
    if (x8_18 != 0)
        UI2SetState(zx.q(x19), &data_11cf1b8, 0xffffffff, 0)
        x8_18 = *(gMultiplayerDlg + 8)
else
    x8_18 = *(gMultiplayerDlg + 8)
    
    if (x8_18 != 0)
        UI2SetState(zx.q(x19), &data_11cf1b8, 0xffffffff, 0)
        x8_18 = *(gMultiplayerDlg + 8)

if (x8_18 s>= x22_2 - 1)
    return 

return UI2SetState(zx.q(x19), &data_11cf1d0, 0xffffffff, 0) __tailcall
