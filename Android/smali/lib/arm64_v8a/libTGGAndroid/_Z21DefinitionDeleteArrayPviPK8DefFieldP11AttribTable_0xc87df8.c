// 函数: _Z21DefinitionDeleteArrayPviPK8DefFieldP11AttribTable
// 地址: 0xc87df8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg3 + 0x30)
int32_t i_1 = arg2
int32_t x9 = *(x8 + 0x18)
void* x22 = arg1

if (x9 - 1 u> 0x10)
label_c87e58:
    
    if (i_1 s>= 1)
        int64_t x23_1 = sx.q(*(x8 + 0x14))
        int32_t i
        
        do
            DefinitionDeleteVariableArrayField(x22, arg3, arg4)
            i = i_1
            i_1 -= 1
            x22 += x23_1
        while (i != 1)
else
    if (x9 u> 0x11)
    label_c87e98:
        pthread_kill(pthread_self(), 6)
        void* x0_2
        DefField* x1_1
        AttribTable* x2_1
        int32_t x3
        x0_2, x1_1, x2_1, x3 = XNoReturn()
        return DefinitionDeleteVariableArray(x0_2, x1_1, x2_1, x3) __tailcall
    
    int32_t x9_1 = 1 << x9
    
    if ((x9_1 & 0x1c41e) == 0)
        if ((x9_1 & 0x21b60) == 0)
            goto label_c87e98
        
        goto label_c87e58
