// 函数: sub_57f980
// 地址: 0x57f980
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* result = sub_5722c0(arg2, 0x3e9, arg1, arg2)
int32_t i_1 = *result
uint32_t edi_1
int32_t i

if (i_1 == 0)
    do
        i = 0
    label_57f9c2:
        
        if (i_1 == 0)
            return result
        
        void* eax_1 = arg2 * 0x5a30
        int32_t edx = *(eax_1 + arg1 + 0x1752c)
        void* eax_5
        
        if (edx s<= 0)
        label_57f9f1:
            
            if (sub_578e10(arg1, i_1) != 0)
                eax_5 = nullptr
            else
                eax_5 = 1
        else
        label_57f9e1:
            
            if (*(eax_1 + 0x18e78 + arg1) != i_1)
                if (1 s< edx)
                    break
                
                goto label_57f9f1
            
            sub_578e10(arg1, i_1)
            eax_5 = nullptr
        
        result = sub_578d00(eax_5, *(arg1 + 0x19cc), arg1, i_1, 1, eax_5, nullptr)
        i_1 = i
    while (i == 0)
    
    edi_1 = zx.d(i.w)
else
    edi_1 = zx.d(i_1.w)

if (edi_1 u>= 0x320)
    sub_591930()

result = edi_1 * 0x64
i = *(result + arg1 + 0x1aa4)
goto label_57f9c2
