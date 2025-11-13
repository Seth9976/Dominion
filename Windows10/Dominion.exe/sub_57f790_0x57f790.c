// 函数: sub_57f790
// 地址: 0x57f790
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* edi = arg2
void* ebx = arg1
void* var_c = ebx

if (*(edi + 0x400) s<= 0)
    return 

int32_t i_2 = 1
void* var_14_1 = edi
int32_t ecx_6
int32_t eax

do
    uint32_t esi_1 = *arg2
    
    if (sub_57f390(eax, arg2, ebx, esi_1) == 2)
        int32_t i = i_2
        int32_t i_4 = i_2
        
        if (i_2 s< *(edi + 0x400))
            do
                uint32_t eax_3 = sub_5916b0(*(edi + (i << 2)))
                int32_t i_5
                
                if (sub_5916b0(esi_1) != eax_3)
                    i_5 = i_4
                else
                    *(edi + 0x400) -= 1
                    *(edi + (i << 2)) = *(edi + (*(edi + 0x400) << 2))
                    i_5 = i_4 - 1
                
                ebx = var_c
                i = i_5 + 1
                i_4 = i
            while (i s< *(edi + 0x400))
    
    int32_t i_6 = i_2 + 1
    ecx_6 = *(edi + 0x400)
    arg2 = var_14_1 + 4
    i_2 = i_6
    eax = i_6 - 1
    var_14_1 = arg2
while (eax s< ecx_6)

if (ecx_6 s<= 0)
    return 

int32_t i_3 = 1
void* ecx_7 = edi
void* var_c_1 = edi
int32_t i_7

do
    uint32_t esi_2 = *ecx_7
    uint32_t eax_10 = esi_2 & 0x30
    void* eax_11
    bool cond:2_1
    
    if (eax_10 != 0)
        eax_11, arg2 = sub_5769e0(eax_10, arg2, ebx, esi_2)
        cond:2_1 = (*(eax_11 + 0xac) & 0x20) == 0
    else
        eax_11, arg2 = sub_576940(eax_10, arg2, ebx, esi_2)
        
        if (*(eax_11 + 0x4c) != 2)
            arg2 = sub_591930()
        
        cond:2_1 = (*(eax_11 + 0x60) & 0x20) == 0
    
    if (not(cond:2_1))
        uint32_t eax_12
        int32_t edx_1
        eax_12, edx_1 = sub_5915b0(eax_11, arg2, ebx, esi_2)
        int32_t eax_14
        
        if (eax_10 != 0)
            void* eax_15
            eax_15, arg2 = sub_5769e0(eax_12, edx_1, ebx, esi_2)
            eax_14 = *(eax_15 + 0xb0)
        else
            void* eax_13
            eax_13, arg2 = sub_576940(eax_12, edx_1, ebx, esi_2)
            eax_14 = *(eax_13 + 0x84)
        
        int32_t i_1 = i_3
        
        if (i_3 s< *(edi + 0x400))
            do
                uint32_t eax_17 = *(edi + (i_1 << 2))
                uint32_t eax_18
                int32_t edx_2
                eax_18, edx_2 = sub_5915b0(eax_17, arg2, ebx, eax_17)
                int32_t ecx_13
                
                if ((eax_17.b & 0x30) != 0)
                    void* eax_21
                    eax_21, arg2 = sub_5769e0(eax_17, edx_2, ebx, eax_17)
                    ecx_13 = *(eax_21 + 0xb0)
                else
                    void* eax_20
                    eax_20, arg2 = sub_576940(eax_17, edx_2, ebx, eax_17)
                    ecx_13 = *(eax_20 + 0x84)
                
                if (eax_12 == eax_18 && eax_14 == ecx_13)
                    *(edi + 0x400) -= 1
                    *(edi + (i_1 << 2)) = *(edi + (*(edi + 0x400) << 2))
                    i_1 -= 1
                
                i_1 += 1
            while (i_1 s< *(edi + 0x400))
    
    i_7 = i_3 + 1
    ecx_7 = var_c_1 + 4
    i_3 = i_7
    var_c_1 = ecx_7
while (i_7 - 1 s< *(edi + 0x400))
