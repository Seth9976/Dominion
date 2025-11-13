// 函数: sub_5cec70
// 地址: 0x5cec70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax
int32_t ecx_1
eax, ecx_1 = sub_5cbb20(arg2)
void* esi = arg4
int32_t ebx = eax
void* var_24 = esi
*(esi + 0x810) = 0
int32_t var_8 = ebx
*(esi + 0x400) = 0
*(esi + 0x808) = 0
void* eax_1
int32_t ecx_3
eax_1, ecx_3 = sub_5ce940(eax, ebx, arg3, 0x717, 0x86efe4, 6, ecx_1, 0x10)
void* var_24_1 = esi
sub_5ce940(eax_1, ebx, arg3, 0x706, 0x86effc, 5, ecx_3, 2)

for (void* const i = &data_86efd0; i s< 0x86efe4; i += 4)
    if (*i == ebx)
        *(*(esi + 0x810) * 0x408 + esi + 0x404) = 3
        void* eax_4 = *(esi + 0x810) * 0x408 + esi
        
        for (void* const j = &data_86efc4; j s< &data_86efd0; j += 4)
            int32_t ebx_1 = *(arg3 + 0x1520)
            int32_t ecx_5 = 0
            int32_t edx_2 = *j
            
            if (ebx_1 s> 0)
                void* eax_5 = arg3 + 0x1a4c
                
                do
                    if (*eax_5 == edx_2)
                        *(eax_4 + (*(eax_4 + 0x400) << 2)) = edx_2
                        *(eax_4 + 0x400) += 1
                        break
                    
                    ecx_5 += 1
                    eax_5 += 0x64
                while (ecx_5 s< ebx_1)
        
        esi = arg4
        ebx = var_8
        *(esi + 0x810) += 1
        break

void* const i_1 = &data_86efc4
void* var_c_1
void* ebx_2

while (true)
    if (*i_1 == ebx)
        *(*(esi + 0x810) * 0x408 + esi + 0x404) = 4
        void* eax_9 = *(esi + 0x810) * 0x408 + esi
        i_1 = &data_86efd0
        void* const i_5 = &data_86efd0
        
        do
            int32_t edx_3 = *(arg3 + 0x1520)
            int32_t ecx_7 = 0
            int32_t ebx_3 = *i_1
            
            if (edx_3 s> 0)
                var_c_1 = arg3 + 0x1a4c
                void* eax_10 = arg3 + 0x1a4c
                
                do
                    if (*eax_10 == ebx_3)
                        *(eax_9 + (*(eax_9 + 0x400) << 2)) = ebx_3
                        ebx_2 = arg3 + 0x1a4c
                        *(eax_9 + 0x400) += 1
                        i_1 = i_5
                        goto label_5cedec
                    
                    ecx_7 += 1
                    eax_10 += 0x64
                while (ecx_7 s< edx_3)
                
                i_1 = i_5
            
            ebx_2 = arg3 + 0x1a4c
            var_c_1 = ebx_2
        label_5cedec:
            i_1 += 4
            i_5 = i_1
        while (i_1 s< 0x86efe4)
        
        esi = arg4
        *(esi + 0x810) += 1
        break
    
    i_1 += 4
    
    if (i_1 s>= &data_86efd0)
        ebx_2 = arg3 + 0x1a4c
        var_c_1 = ebx_2
        break

void* var_24_3 = esi
int32_t eax_15 = sub_5cebe0(
    sub_5ceaf0(
        sub_5ceaf0(
            sub_5cea30(sub_5cebe0(i_1, &data_86efd0, var_8, 5, 4, esi), var_8, arg3, 0x92e, 
                0x86ef90, 3), 
            var_8, arg3, 0x909, 0x92d, 0, esi), 
        var_8, arg3, 0x905, 0x92c, 0, esi), 
    0x86ef9c, var_8, 0xa, 5, esi)
void* eax_20 = sub_5ceaf0(
    sub_5ceaf0(
        sub_5ceaf0(
            sub_5cebe0(sub_5cebe0(eax_15, 0x86ef68, var_8, 5, 8, esi), 0x86ef7c, var_8, 5, 8, esi), 
            var_8, arg3, 0xc06, 0xc07, 7, esi), 
        var_8, arg3, 0xc08, 0xc09, 7, esi), 
    var_8, arg3, 0xc04, 0xc05, 7, esi)
int32_t eax_23
int32_t ecx_21
eax_23, ecx_21 = sub_5cebe0(
    sub_5ceaf0(sub_5ceaf0(eax_20, var_8, arg3, 0xc0b, 0xc0c, 7, esi), var_8, arg3, 0xc10, 0xc11, 7, 
        esi), 
    0x86ef40, var_8, 8, 6, esi)
void* var_24_8 = esi
void* eax_27 = sub_5ceaf0(
    sub_5ceaf0(
        sub_5ceaf0(sub_5ce940(eax_23, var_8, arg3, 0xe00, 0x86ef60, 2, ecx_21, 0xb), var_8, arg3, 
            0xe07, 0xe19, 0xb, esi), 
        var_8, arg3, 0xe16, 0xe1d, 0xb, esi), 
    var_8, arg3, 0xe17, 0xe1b, 0xb, esi)
void* eax_29
int32_t ecx_28
eax_29, ecx_28 = sub_5ceaf0(sub_5ceaf0(eax_27, var_8, arg3, 0xd40, 0xd4c, 0xc, esi), var_8, arg3, 
    0xd3f, 0xd4b, 0xc, esi)
void* var_24_10 = esi
void* eax_33 = sub_5ceaf0(
    sub_5ceaf0(
        sub_5ceaf0(sub_5ce940(eax_29, var_8, arg3, 0xd46, 0x86ef2c, 2, ecx_28, 0xc), var_8, arg3, 
            0xd04, 0xd23, 1, esi), 
        var_8, arg3, 0xd05, 0xd25, 1, esi), 
    var_8, arg3, 0xd07, 0xd27, 1, esi)
void* eax_37 = sub_5ceaf0(
    sub_5ceaf0(
        sub_5ceaf0(sub_5ceaf0(eax_33, var_8, arg3, 0xd07, 0xd4a, 0xc, esi), var_8, arg3, 0xd0b, 
            0xd22, 1, esi), 
        var_8, arg3, 0xd0e, 0xd21, 1, esi), 
    var_8, arg3, 0xd13, 0xd24, 1, esi)
void* eax_40
int32_t ecx_40
eax_40, ecx_40 = sub_5ceaf0(
    sub_5ceaf0(sub_5ceaf0(eax_37, var_8, arg3, 0xd1a, 0xd26, 1, esi), var_8, arg3, 0xd09, 0xd29, 0, 
        esi), 
    var_8, arg3, 0xd10, 0xd2b, 0, esi)
void* var_24_13 = esi
void* eax_41
int32_t ecx_42
eax_41, ecx_42 = sub_5ce940(eax_40, var_8, arg3, 0xd11, 0x86ef34, 3, ecx_40, 9)
void* var_24_14 = esi
void* eax_45 = sub_5ceaf0(
    sub_5ceaf0(
        sub_5ceaf0(sub_5ce940(eax_41, var_8, arg3, 0xd12, 0x86eef0, 3, ecx_42, 0xa), var_8, arg3, 
            0xd1c, 0xd2b, 0, esi), 
        var_8, arg3, 0xd21, 0xd2f, 0, esi), 
    var_8, arg3, 0xd22, 0xd29, 0, esi)
void* var_24_16 = esi
int32_t eax_50 = sub_5cebe0(
    sub_5cebe0(
        sub_5ceaf0(
            sub_5cea30(sub_5ceaf0(eax_45, var_8, arg3, 0xd3b, 0xd28, 0, esi), var_8, arg3, 0xf46, 
                0x86eefc, 0xc), 
            var_8, arg3, 0x1305, 0x1306, 7, esi), 
        0x86eed0, var_8, 4, 7, esi), 
    0x86eee0, var_8, 4, 7, esi)
sub_5cebe0(
    sub_5cebe0(
        sub_5cebe0(sub_5cebe0(eax_50, 0x86eeb0, var_8, 4, 7, esi), 0x86eec0, var_8, 4, 7, esi), 
        0x86ee90, var_8, 4, 7, esi), 
    0x86eea0, var_8, 4, 7, esi)

if (var_8 == 0xe28)
    arg4 = nullptr
    *(*(esi + 0x810) * 0x408 + esi + 0x404) = 0xe
    
    if (*(arg3 + 0x1520) s> 0)
        void* i_2
        
        do
            int32_t j_1 = *ebx_2
            
            if (sub_574b70(j_1) != 0)
                int32_t eax_56 = 0
                void* ecx_58 = *(esi + 0x810) * 0x408 + esi
                int32_t ebx_4 = *(ecx_58 + 0x400)
                
                if (ebx_4 s<= 0)
                label_5cf26f:
                    *(ecx_58 + (ebx_4 << 2)) = j_1
                    *(ecx_58 + 0x400) += 1
                else
                    while (*(ecx_58 + (eax_56 << 2)) != j_1)
                        eax_56 += 1
                        
                        if (eax_56 s>= ebx_4)
                            goto label_5cf26f
                
                ebx_2 = var_c_1
            
            ebx_2 += 0x64
            i_2 = arg4 + 1
            var_c_1 = ebx_2
            arg4 = i_2
        while (i_2 s< *(arg3 + 0x1520))
    
    int32_t ecx_59 = *(esi + 0x810)
    
    if (*(ecx_59 * 0x408 + esi + 0x404) != 0)
        *(esi + 0x810) = ecx_59 + 1

int32_t ebx_7 = var_8
void* eax_60 = sub_571b30(ebx_7, *(arg3 + 0xd48))
int32_t i_3 = 0
void* ecx_61 = eax_60 + 0xc8

do
    int32_t eax_61 = *(ecx_61 - 0x20)
    
    if (eax_61 == 0)
        break
    
    if (eax_61 == 0xd && *ecx_61 != 0)
        int32_t eax_63 = i_3 * 0xb4
        int32_t edx_38 = *(eax_63 + eax_60 + 0xbc)
        void* ecx_64 = *(eax_63 + eax_60 + 0xc0)
        arg4 = ecx_64
        
        if (ecx_64 != 0 && ebx_7 != 0x121c && ebx_7 != 0x121a)
            *(*(esi + 0x810) * 0x408 + esi + 0x404) = 0xd
            
            if (ecx_64 s> 0)
                void* ebx_6 = arg3 + 0xe64 + (edx_38 << 2)
                void* j_2
                
                do
                    int32_t eax_65 = 0
                    int32_t k = *ebx_6
                    void* ecx_66 = *(esi + 0x810) * 0x408 + esi
                    int32_t edx_39 = *(ecx_66 + 0x400)
                    
                    if (edx_39 s<= 0)
                    label_5cf39a:
                        *(ecx_66 + (edx_39 << 2)) = k
                        *(ecx_66 + 0x400) += 1
                    else
                        while (*(ecx_66 + (eax_65 << 2)) != k)
                            eax_65 += 1
                            
                            if (eax_65 s>= edx_39)
                                goto label_5cf39a
                    
                    ebx_6 += 4
                    j_2 = arg4
                    arg4 -= 1
                while (j_2 != 1)
                ebx_7 = var_8
            
            *(esi + 0x810) += 1
        
        break
    
    i_3 += 1
    ecx_61 += 0xb4
while (i_3 s< 8)

if (data_b81998 == ebx_7)
    *(*(esi + 0x810) * 0x408 + esi + 0x404) = 0xf
    int32_t eax_67 = 0
    void* ecx_68 = *(esi + 0x810) * 0x408 + esi
    int32_t edx_40 = *(ecx_68 + 0x400)
    
    if (edx_40 s<= 0)
    label_5cf3fe:
        *(ecx_68 + (edx_40 << 2)) = 0x123b
        *(ecx_68 + 0x400) += 1
    else
        while (*(ecx_68 + (eax_67 << 2)) != 0x123b)
            eax_67 += 1
            
            if (eax_67 s>= edx_40)
                goto label_5cf3fe
    
    *(esi + 0x810) += 1

if (data_b81950 == ebx_7)
    *(*(esi + 0x810) * 0x408 + esi + 0x404) = 0xf
    int32_t eax_69 = 0
    void* ecx_70 = *(esi + 0x810) * 0x408 + esi
    int32_t edx_41 = *(ecx_70 + 0x400)
    
    if (edx_41 s<= 0)
    label_5cf454:
        *(ecx_70 + (edx_41 << 2)) = 0x716
        *(ecx_70 + 0x400) += 1
    else
        while (*(ecx_70 + (eax_69 << 2)) != 0x716)
            eax_69 += 1
            
            if (eax_69 s>= edx_41)
                goto label_5cf454
    
    *(esi + 0x810) += 1

void* result = *(eax_60 + 0x9c) & 0x100

if (result != 0)
    *(*(esi + 0x810) * 0x408 + esi + 0x404) = 0xe
    result = sub_577bb0(0xb81824, ebx_7)
    arg4 = result
    
    if (*result == 0)
        sub_63b870(result, &data_801800, "whatRef[0] != CARD_NONE", 
            "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x1411, "ZoomAssociatedCards")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    for (int32_t i_4 = 0; i_4 s< 0xe; i_4 += 1)
        int32_t j_3 = *(result + (i_4 << 2))
        
        if (j_3 == 0)
            break
        
        int32_t eax_71 = 0
        void* ecx_75 = *(esi + 0x810) * 0x408 + esi
        int32_t edx_43 = *(ecx_75 + 0x400)
        
        if (edx_43 s<= 0)
        label_5cf4d0:
            *(ecx_75 + (edx_43 << 2)) = j_3
            *(ecx_75 + 0x400) += 1
        else
            while (*(ecx_75 + (eax_71 << 2)) != j_3)
                eax_71 += 1
                
                if (eax_71 s>= edx_43)
                    goto label_5cf4d0
        
        result = arg4
    
    *(esi + 0x810) += 1

return result
