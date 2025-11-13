// 函数: sub_7140a0
// 地址: 0x7140a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebx = arg2[3]
int32_t* var_8 = arg2

if (*(ebx + 0x6c) == 0)
    arg2[8] = 0
    return 

void* i = *arg2
void* eax

if (*(i + 8) != 0)
    eax = *(arg1 + 0x34)
    
    if (eax == 0)
        arg2[8] = 0
    else
        void** eax_1 = *(eax + 0xc)
        int32_t ecx = 0
        eax = *eax_1
        
        if (eax s> 0)
            while (*(eax_1[2] + (ecx << 2)) != i)
                ecx += 1
                
                if (ecx s>= eax)
                    goto label_7140e1
            
            arg2 = var_8
            goto label_7140f5
        
    label_7140e1:
        var_8[8] = 0
    
    return 

label_7140f5:
arg2[8] = 1
void* ebx_1
void* edi_1

if (*(ebx + 0x68) != 0)
    edi_1 = arg1 + 0x64
    ebx_1 = arg1 + 0x5c
else
    void* edx_1 = *(ebx + 8)
    
    if (edx_1 != 0)
        sub_713a30(arg1, edx_1)
    
    *(ebx + 0x68) = 1
    void* eax_2 = arg1 + 0x5c
    int32_t ecx_2 = *(arg1 + 0x60)
    edi_1 = arg1 + 0x64
    
    if (*eax_2 != ecx_2)
        ebx_1 = eax_2
    else
        int32_t eax_3 = ecx_2 * 2
        *(arg1 + 0x60) = eax_3
        *edi_1 = realloc(*edi_1, eax_3 << 3)
        ebx_1 = arg1 + 0x5c
        eax_2 = arg1 + 0x5c
    
    int32_t ecx_3 = *eax_2
    int32_t eax_6 = *edi_1
    *(eax_6 + (ecx_3 << 3)) = 0
    *(eax_6 + (ecx_3 << 3) + 4) = ebx
    *(arg1 + 0x5c) += 1

int32_t edx_3 = var_8[2]
int32_t ecx_4 = var_8[1]
int32_t var_10_1 = edx_3
int32_t var_c_1 = ecx_4

if (*(*var_8 + 0x44) == 0)
    int32_t eax_20 = 0
    int32_t var_14_1 = 0
    
    if (ecx_4 s> 0)
        do
            void* ebx_2 = *(edx_3 + (eax_20 << 2))
            
            if (*(ebx_2 + 0x68) != 0)
                ebx_1 = arg1 + 0x5c
                edi_1 = arg1 + 0x64
            else
                void* edx_5 = *(ebx_2 + 8)
                
                if (edx_5 != 0)
                    sub_713a30(arg1, edx_5)
                
                *(ebx_2 + 0x68) = 1
                edi_1 = arg1 + 0x64
                int32_t eax_21 = *(arg1 + 0x60)
                ebx_1 = arg1 + 0x5c
                
                if (*ebx_1 == eax_21)
                    int32_t eax_22 = eax_21 * 2
                    *(arg1 + 0x60) = eax_22
                    *edi_1 = realloc(*edi_1, eax_22 << 3)
                
                int32_t ecx_10 = *ebx_1
                int32_t eax_25 = *edi_1
                *(eax_25 + (ecx_10 << 3) + 4) = ebx_2
                edx_3 = var_10_1
                *(eax_25 + (ecx_10 << 3)) = 0
                *ebx_1 += 1
                eax_20 = var_14_1
                ecx_4 = var_c_1
            
            eax_20 += 1
            var_14_1 = eax_20
        while (eax_20 s< ecx_4)
else
    int32_t edi_2 = 0
    
    if (ecx_4 s> 0)
        do
            void* i_1 = *(edx_3 + (edi_2 << 2))
            void* i_2 = i_1
            
            if (*(i_1 + 0x68) == 0)
                void* eax_9 = *(i_1 + 8)
                
                if (eax_9 != 0)
                    sub_713a30(arg1, eax_9)
                    i_1 = i_2
                
                *(i_1 + 0x68) = 1
                int32_t eax_10 = *(arg1 + 0x60)
                
                if (*ebx_1 == eax_10)
                    int32_t eax_11 = eax_10 * 2
                    *(arg1 + 0x60) = eax_11
                    i_1 = i_2
                    *(arg1 + 0x64) = realloc(*(arg1 + 0x64), eax_11 << 3)
                
                int32_t ecx_6 = *ebx_1
                int32_t eax_14 = *(arg1 + 0x64)
                *(eax_14 + (ecx_6 << 3)) = 0
                *(eax_14 + (ecx_6 << 3) + 4) = i_1
                *ebx_1 += 1
            
            int32_t edi_3 = 0
            
            if (*ebx_1 s<= 0)
            label_714200:
                int32_t eax_15 = *(arg1 + 0x6c)
                
                if (*(arg1 + 0x68) == eax_15)
                    int32_t eax_16 = eax_15 * 2
                    *(arg1 + 0x6c) = eax_16
                    i_1 = i_2
                    *(arg1 + 0x70) = realloc(*(arg1 + 0x70), eax_16 << 2)
                
                *(*(arg1 + 0x70) + (*(arg1 + 0x68) << 2)) = i_1
                *(arg1 + 0x68) += 1
            else
                void* ecx_7 = *(arg1 + 0x64)
                
                while (*(ecx_7 + 4) != i_1)
                    edi_3 += 1
                    ecx_7 += 8
                    
                    if (edi_3 s>= *ebx_1)
                        goto label_714200
            
            edx_3 = var_10_1
            edi_2 = edi_3 + 1
        while (edi_2 s< var_c_1)
        
        ebx_1 = arg1 + 0x5c
    
    edi_1 = arg1 + 0x64

int32_t eax_26 = *(arg1 + 0x60)

if (*ebx_1 == eax_26)
    int32_t eax_27 = eax_26 * 2
    *(arg1 + 0x60) = eax_27
    *edi_1 = realloc(*edi_1, eax_27 << 3)

int32_t ecx_11 = *ebx_1
int32_t eax_30 = *edi_1
*(eax_30 + (ecx_11 << 3) + 4) = var_8
int32_t edx_8 = var_c_1
*(eax_30 + (ecx_11 << 3)) = 3
eax = nullptr
*ebx_1 += 1
void* var_14_2 = nullptr

if (edx_8 s<= 0)
    return 

int32_t esi_1 = var_10_1

do
    void* eax_31 = *(esi_1 + (eax << 2))
    int32_t edi_4 = 0
    int32_t ebx_3 = *(eax_31 + 0xc)
    int32_t eax_32 = *(eax_31 + 0x10)
    int32_t var_18_2 = eax_32
    
    if (ebx_3 s> 0)
        do
            void* esi_2 = *(eax_32 + (edi_4 << 2))
            
            if (*(esi_2 + 0x6c) != 0)
                if (*(esi_2 + 0x68) != 0)
                    sub_713ba0(*(esi_2 + 0x10), *(esi_2 + 0xc))
                    eax_32 = var_18_2
                
                *(esi_2 + 0x68) = 0
            
            edi_4 += 1
        while (edi_4 s< ebx_3)
        
        edx_8 = var_c_1
        esi_1 = var_10_1
    
    eax = var_14_2 + 1
    var_14_2 = eax
while (eax s< edx_8)

int32_t ecx_13 = 0

do
    void* eax_34 = *(esi_1 + (ecx_13 << 2))
    ecx_13 += 1
    *(eax_34 + 0x68) = 1
while (ecx_13 s< edx_8)
