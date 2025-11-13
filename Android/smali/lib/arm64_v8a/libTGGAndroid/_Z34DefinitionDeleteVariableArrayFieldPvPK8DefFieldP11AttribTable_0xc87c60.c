// 函数: _Z34DefinitionDeleteVariableArrayFieldPvPK8DefFieldP11AttribTable
// 地址: 0xc87c60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x21 = *(arg2 + 0x30)
void* x19 = arg1
int32_t x8 = *(x21 + 0x18)

if (x8 - 1 u> 0x10)
label_c87cbc:
    int32_t x22_1 = *(x21 + 0x10)
    
    if (x22_1 != 0)
        DefinitionDeleteField(x19, *(x21 + 8), arg3)
        
        if (x22_1 s>= 2)
            int32_t x22_2 = 1
            int64_t x23_1 = 0x68
            int32_t x24_1
            
            do
                x24_1 = *(x21 + 0x10)
                x22_2 += 1
                DefinitionDeleteField(x19, *(x21 + 8) + x23_1, arg3)
                x23_1 += 0x68
            while (x22_2 s< x24_1)
else
    if (x8 u> 0x11)
    label_c87d4c:
        pthread_kill(pthread_self(), 6)
        void* x0_3
        DefMap* x1_2
        AttribTable* x2_2
        x0_3, x1_2, x2_2 = XNoReturn()
        return DefinitionDeleteBlockFields(x0_3, x1_2, x2_2) __tailcall
    
    int32_t x9_1 = 1 << x8
    
    if ((x9_1 & 0x1c41e) == 0)
        if ((x9_1 & 0x21a60) != 0)
            goto label_c87cbc
        
        if (x8 != 8)
            goto label_c87d4c
        
        arg1 = *x19
        
        if (arg1 != *(arg2 + 0x48))
            XFree(arg1)
            *x19 = 0
