// 函数: sub_6dd740
// 地址: 0x6dd740
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void*** i = *(arg1 + 4)

while (i != 0)
    void** edx = *i
    void* ecx = &i[1]
    void*** i_1 = i
    i = *ecx
    int32_t* eax = edx[8]
    
    if ((eax != 2 && eax != 4) || arg2 != 0)
        sub_6dd660(arg1, edx)
        void* ecx_2 = i_1[2]
        int32_t eax_2 = *ecx
        
        if (ecx_2 == 0)
            *(arg1 + 4) = eax_2
        else
            *(ecx_2 + 4) = eax_2
        
        void* ecx_3 = i_1[1]
        int32_t eax_3 = i_1[2]
        
        if (ecx_3 == 0)
            *(arg1 + 8) = eax_3
        else
            *(ecx_3 + 8) = eax_3
        
        *(arg1 + 0xc) -= 1
        sub_64c080(i_1, 0xc)
