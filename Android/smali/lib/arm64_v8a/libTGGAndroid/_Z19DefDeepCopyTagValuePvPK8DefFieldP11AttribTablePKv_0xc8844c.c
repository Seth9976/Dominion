// 函数: _Z19DefDeepCopyTagValuePvPK8DefFieldP11AttribTablePKv
// 地址: 0xc8844c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x1 = *(arg4 + zx.q(*(arg2 + 0x20)))

if (x1 == 0xffffffff)
    return 

void* x20_1 = arg1
arg1 = AttribTagGetDefMap(arg3, x1)
int32_t x8_1 = *(arg1 + 0x18)

if (x8_1 - 1 u> 0x10)
label_c884c4:
    uint64_t x23_1 = zx.q(*arg2)
    int32_t x22_1 = *(arg1 + 0x14)
    void* x21_2 = *(arg4 + x23_1)
    int64_t x0_2 = XMalloc(x22_1)
    *(x20_1 + x23_1) = x0_2
    memcpy(x0_2, x21_2, sx.q(x22_1))
    int32_t x22_2 = *(arg1 + 0x10)
    
    if (x22_2 != 0)
        void* x20_2 = *(x20_1 + x23_1)
        DefDeepCopyField(x20_2, *(arg1 + 8), nullptr, x21_2)
        
        if (x22_2 s>= 2)
            int32_t x22_3 = 1
            int64_t x23_2 = 0x68
            int32_t x24_1
            
            do
                x24_1 = *(arg1 + 0x10)
                x22_3 += 1
                DefDeepCopyField(x20_2, *(arg1 + 8) + x23_2, nullptr, x21_2)
                x23_2 += 0x68
            while (x22_3 s< x24_1)
else
    if (x8_1 u> 0x11)
    label_c885a4:
        pthread_kill(pthread_self(), 6)
        void* x0_11
        int32_t x1_6
        DefField* x2_3
        AttribTable* x3_3
        void* x4_1
        x0_11, x1_6, x2_3, x3_3, x4_1 = XNoReturn()
        return DefDeepCopyArray(x0_11, x1_6, x2_3, x3_3, x4_1) __tailcall
    
    int32_t x9_2 = 1 << x8_1
    
    if ((x9_2 & 0x1c41e) == 0)
        if ((x9_2 & 0x21a60) != 0)
            goto label_c884c4
        
        if (x8_1 != 8)
            goto label_c885a4
        
        uint64_t x22_4 = zx.q(*arg2)
        char* x19_2 = *(arg4 + x22_4)
        int32_t x21_3 = strlen(x19_2) + 1
        int64_t x0_8 = XMalloc(x21_3)
        *(x20_1 + x22_4) = x0_8
        return memcpy(x0_8, x19_2, sx.q(x21_3)) __tailcall
