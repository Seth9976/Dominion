// 函数: sub_50dc80
// 地址: 0x50dc80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = arg3
int32_t i_4 = arg2
int32_t i_3 = i
int32_t* eax_1 = *(sub_573400() + 4)
int32_t* esi_1

if (i != 0)
    esi_1 = 7
    eax_1 = &eax_1[0x565]
    
    while (*eax_1 != i)
        if (eax_1[1] == i)
            break
        
        esi_1 += 1
        eax_1 = &eax_1[4]
        
        if (esi_1 s>= 0x48)
            goto label_50dcc8

if (i == 0 || esi_1 == 0)
label_50dcc8:
    esi_1 = 1

if (arg2 s> 0)
    if ((arg5 & 1) != 0)
        int32_t eax_7
        int32_t i_1
        
        do
            void* eax_2 = sub_573400()
            int32_t eax_4
            int32_t edx_1
            edx_1:eax_4 = muls.dp.d(0x51eb851f, 
                sub_5727e0(eax_2, i, *(eax_2 + 4), esi_1, 0xffffffff, nullptr) - *(eax_2 + 4)
                    - 0x1a48)
            int32_t edx_2 = edx_1 s>> 5
            void* eax_5 = sub_573400()
            uint32_t eax_6 = sub_56b780()
            eax_7 = sub_583720(eax_6, *(eax_5 + 0xc), *(eax_5 + 4), (edx_2 u>> 0x1f) + edx_2, 
                0x476, nullptr, 0x476, eax_6, arg4, 4)
            i = i_3
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
        return eax_7
    
    int32_t i_2
    
    do
        int32_t* eax_8 = sub_573400()
        int32_t eax_10
        int32_t edx_5
        edx_5:eax_10 = muls.dp.d(0x51eb851f, 
            sub_5727e0(eax_8, i, eax_8[1], esi_1, 0xffffffff, nullptr) - eax_8[1] - 0x1a48)
        int32_t edx_6 = edx_5 s>> 5
        void* eax_11 = sub_573400()
        eax_1 = sub_583720(eax_11, *(eax_11 + 0xc), *(eax_11 + 4), (edx_6 u>> 0x1f) + edx_6, 0x476, 
            nullptr, 0x476, 0, arg4, 4)
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

return eax_1
