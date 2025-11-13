// 函数: _Z20ChooseSpendVillagersR7DomGameRK13DomActiveItem9PlayerWho
// 地址: 0xbe6fd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t entry_x19
uint64_t var_8 = entry_x19
uint64_t x9 = zx.q(*(arg1 + 0x19ac))
int32_t x8

x8 = arg3.d == 0xffffffff ? 6 : 0x3f1

uint64_t x5_1

if (x9.d s< 1)
    x5_1 = 0
else
    int64_t i_4
    
    if (x9.d u>= 3)
        i_4 = x9 & 0xfffffffe
        int32_t x11_1 = 0
        int32_t x12_1 = 0
        void* __offset(DomGame, 0x15f88) x13_1 = arg1 + 0x15f88
        int64_t i_3 = i_4
        int64_t i
        
        do
            int32_t x15_5 = *(x13_1 - 0x18)
            int32_t entry_x16
            
            if (x15_5 == x8)
                entry_x16 = *(x13_1 - 0x1c)
            
            int32_t x17_3 = *(x13_1 + 8)
            
            if (x17_3 == x8)
                arg2 = zx.q(*(x13_1 + 4))
            
            int32_t x5_4 = entry_x16 == arg3.d ? 1 : 0
            int32_t x3_4 = x5_4 & (x15_5 == x8 ? 1 : 0)
            
            if (x3_4 == 1)
                x5_4 = *(x13_1 - 0x20)
            
            int32_t x4_4 = (arg2.d == arg3.d ? 1 : 0) & (x17_3 == x8 ? 1 : 0)
            
            if (x4_4 != 0)
                entry_x19 = zx.q(*x13_1)
            
            int32_t x6_2 = x5_4 != 0xe00 ? 1 : 0
            int32_t x7_1 = entry_x19.d == 0xe00 ? 1 : 0
            
            if (((x6_2 | (x3_4 ^ 1)) & 1) == 0)
                x6_2 = *(x13_1 - 0xc)
            
            if ((x7_1 & x4_4) != 0)
                x7_1 = *(x13_1 + 0x14)
            
            int32_t x1 = x4_4 & (entry_x19.d != 0xe00 ? 1 : 0)
            entry_x19 = zx.q(x15_5 == x8 ? 1 : 0)
            entry_x16 =
                (entry_x19.d & (entry_x16 != arg3.d ? 1 : 0)) | (x3_4 & (x5_4 != 0xe00 ? 1 : 0))
            arg2 = (zx.q(x17_3 == x8 ? 1 : 0) & zx.q(arg2.d != arg3.d ? 1 : 0)) | zx.q(x1)
            int32_t x15_3
            
            if ((entry_x16 | (x15_5 != x8 ? 1 : 0)) != 0)
                x15_3 = 0
            else
                x15_3 = x6_2
            
            x11_1 += x15_3
            int32_t x15_4
            
            if ((arg2.d | (x17_3 != x8 ? 1 : 0)) != 0)
                x15_4 = 0
            else
                x15_4 = x7_1
            
            i = i_3
            i_3 -= 2
            x12_1 += x15_4
            x13_1 += 0x40
        while (i != 2)
        x5_1 = zx.q(x12_1 + x11_1)
        
        if (i_4 != x9)
            goto label_be71b0
    else
        i_4 = 0
        x5_1 = 0
    label_be71b0:
        void* x11_3 = arg1 + (i_4 << 5) + 0x15f68
        int64_t i_2 = x9 - i_4
        int64_t i_1
        
        do
            if (*(x11_3 + 8) == x8 && *(x11_3 + 4) == arg3.d && *x11_3 == 0xe00)
                x5_1 = zx.q(*(x11_3 + 0x14) + x5_1.d)
            
            i_1 = i_2
            i_2 -= 1
            x11_3 += 0x20
        while (i_1 != 1)

int64_t var_18 = 0
int128_t var_60
__builtin_memset(&var_60, 0, 0x30)
var_60.d = 5
int128_t var_50
var_50:0xc.d = 0
int128_t var_40
var_40:8.q = 0
int64_t var_30 = 0

if (x5_1.d == 0)
    return 0

uint64_t x3_5

if (*(arg1 + 0x19d4) == arg3.d)
    x3_5 = zx.q(*(arg1 + 0x19d8))
else
    x3_5 = zx.q(arg3.d)

int32_t var_70 = 0
return DomNotifyYieldNumber(arg1, &var_18, arg3, x3_5, 0, x5_1, &var_60, 0x2f)
