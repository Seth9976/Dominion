// 函数: sub_4d9890
// 地址: 0x4d9890
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

sub_63d850(arg1, arg2)
sub_63d850(&arg1[1], &arg2[1])
int32_t* edx = &arg1[6]
arg1[2] = arg2[2]
void* edi = &arg2[0x14]
void* var_10 = edi
void* eax_3 = arg2 - arg1
int32_t* var_14 = edx
int32_t i_9 = 3
int32_t i

do
    int32_t ecx_1 = *(edi - 0x3c)
    edx[-2] = *(edi - 0x40)
    edx[-1] = ecx_1
    sub_4d60a0(edx, eax_3 + edx)
    var_14[0xd] = *(edi - 4)
    __builtin_memcpy(&var_14[0xe], var_10, 0x22c)
    __builtin_memcpy(&var_14[0x99], var_10 + 0x22c, 0x22c)
    __builtin_memcpy(&var_14[0x124], var_10 + 0x458, 0x22c)
    __builtin_memcpy(&var_14[0x1af], var_10 + 0x684, 0x22c)
    __builtin_memcpy(&var_14[0x23a], var_10 + 0x8b0, 0x22c)
    __builtin_memcpy(&var_14[0x2c5], var_10 + 0xadc, 0x22c)
    __builtin_memcpy(&var_14[0x350], var_10 + 0xd08, 0x22c)
    __builtin_memcpy(&var_14[0x3db], var_10 + 0xf34, 0x22c)
    edi = var_10 + 0x11a8
    var_14[0x466] = *(var_10 + 0x1160)
    edx = &var_14[0x46a]
    i = i_9
    i_9 -= 1
    var_10 = edi
    var_14 = edx
while (i != 1)
char* const ecx_3 = &data_801800
char* const edx_2 = &data_801800
arg1[0xd42] = arg2[0xd42]
char* eax_10 = arg1[0xd43]

if (eax_10 != 0)
    edx_2 = eax_10

char* eax_11 = arg2[0xd43]

if (eax_11 != 0)
    ecx_3 = eax_11

if (edx_2 != ecx_3)
    if (data_cf65bc != 0)
        char* eax_12 = arg1[0xd43]
        
        if (eax_12 != 0 && *eax_12 != 0)
            char* eax_13 = sub_63d4e0(&arg1[0xd43])
            int32_t temp2_1 = *(eax_13 + 4)
            *(eax_13 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
                arg1[0xd43] = &data_801800
    
    char* eax_14 = arg2[0xd43]
    arg1[0xd43] = eax_14
    
    if (eax_14 != 0 && *eax_14 != 0)
        char* eax_15 = sub_63d4e0(&arg1[0xd43])
        *(eax_15 + 4) += 1

void* edi_11 = &arg1[0xd44]
int32_t i_10 = 0xa
int32_t i_1

do
    char* eax_16 = *edi_11
    char* const edx_5 = &data_801800
    char* const ecx_7 = &data_801800
    
    if (eax_16 != 0)
        edx_5 = eax_16
    
    char* eax_17 = *(eax_3 + edi_11)
    
    if (eax_17 != 0)
        ecx_7 = eax_17
    
    if (edx_5 != ecx_7)
        if (data_cf65bc != 0)
            char* eax_18 = *edi_11
            
            if (eax_18 != 0 && *eax_18 != 0)
                char* eax_19 = sub_63d4e0(edi_11)
                int32_t temp4_1 = *(eax_19 + 4)
                *(eax_19 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)
                    *edi_11 = &data_801800
        
        char* eax_20 = *(eax_3 + edi_11)
        *edi_11 = eax_20
        
        if (eax_20 != 0 && *eax_20 != 0)
            char* eax_21 = sub_63d4e0(edi_11)
            *(eax_21 + 4) += 1
    
    edi_11 += 4
    i_1 = i_10
    i_10 -= 1
while (i_1 != 1)
arg1[0xd4e] = arg2[0xd4e]
__builtin_memcpy(&arg1[0xd4f], &arg2[0xd4f], 0x80)
__builtin_memcpy(&arg1[0xd6f], &arg2[0xd6f], 0xc80)
char* const edi_14 = &data_801800
char* const edx_8 = &data_801800
char* const ecx_11 = &data_801800
arg1[0x108f] = arg2[0x108f]
int32_t eax_23
eax_23.b = arg2[0x1090].b
arg1[0x1090].b = eax_23.b
char* eax_24 = arg1[0x1091]

if (eax_24 != 0)
    edx_8 = eax_24

char* eax_25 = arg2[0x1091]

if (eax_25 != 0)
    ecx_11 = eax_25

if (edx_8 != ecx_11)
    void* ecx_12 = &arg1[0x1091]
    
    if (data_cf65bc != 0)
        char* eax_26 = arg1[0x1091]
        
        if (eax_26 != 0 && *eax_26 != 0)
            char* eax_27 = sub_63d4e0(ecx_12)
            int32_t temp5_1 = *(eax_27 + 4)
            *(eax_27 + 4) -= 1
            
            if (temp5_1 != 1)
                ecx_12 = &arg1[0x1091]
            else
                sub_64c080(eax_27, *(eax_27 + 0xc) + 0x10)
                ecx_12 = &arg1[0x1091]
                *ecx_12 = &data_801800
    
    char* eax_28 = arg2[0x1091]
    *ecx_12 = eax_28
    
    if (eax_28 != 0 && *eax_28 != 0)
        char* eax_29 = sub_63d4e0(ecx_12)
        *(eax_29 + 4) += 1

char* eax_30 = arg1[0x1092]
char* const edx_11 = &data_801800
char* const ecx_14 = &data_801800

if (eax_30 != 0)
    edx_11 = eax_30

char* eax_31 = arg2[0x1092]

if (eax_31 != 0)
    ecx_14 = eax_31

if (edx_11 != ecx_14)
    void* ecx_15 = &arg1[0x1092]
    
    if (data_cf65bc != 0)
        char* eax_32 = arg1[0x1092]
        
        if (eax_32 != 0 && *eax_32 != 0)
            char* eax_33 = sub_63d4e0(ecx_15)
            int32_t temp6_1 = *(eax_33 + 4)
            *(eax_33 + 4) -= 1
            
            if (temp6_1 != 1)
                ecx_15 = &arg1[0x1092]
            else
                sub_64c080(eax_33, *(eax_33 + 0xc) + 0x10)
                ecx_15 = &arg1[0x1092]
                *ecx_15 = &data_801800
    
    char* eax_34 = arg2[0x1092]
    *ecx_15 = eax_34
    
    if (eax_34 != 0 && *eax_34 != 0)
        char* eax_35 = sub_63d4e0(ecx_15)
        *(eax_35 + 4) += 1

char* const edx_14 = &data_801800
arg1[0x1093] = arg2[0x1093]
char* const ecx_17 = &data_801800
arg1[0x1094] = arg2[0x1094]
char* eax_38 = arg1[0x1095]

if (eax_38 != 0)
    edx_14 = eax_38

char* eax_39 = arg2[0x1095]

if (eax_39 != 0)
    ecx_17 = eax_39

if (edx_14 != ecx_17)
    void* ecx_18 = &arg1[0x1095]
    
    if (data_cf65bc != 0)
        char* eax_40 = arg1[0x1095]
        
        if (eax_40 != 0 && *eax_40 != 0)
            char* eax_41 = sub_63d4e0(ecx_18)
            int32_t temp7_1 = *(eax_41 + 4)
            *(eax_41 + 4) -= 1
            
            if (temp7_1 != 1)
                ecx_18 = &arg1[0x1095]
            else
                sub_64c080(eax_41, *(eax_41 + 0xc) + 0x10)
                ecx_18 = &arg1[0x1095]
                *ecx_18 = &data_801800
    
    char* eax_42 = arg2[0x1095]
    *ecx_18 = eax_42
    
    if (eax_42 != 0 && *eax_42 != 0)
        char* eax_43 = sub_63d4e0(ecx_18)
        *(eax_43 + 4) += 1

char* eax_44 = arg1[0x1096]
void* edx_17 = &arg1[0x1096]
char* const ecx_20 = &data_801800

if (eax_44 != 0)
    ecx_20 = eax_44

char* eax_45 = arg2[0x1096]

if (eax_45 != 0)
    edi_14 = eax_45

if (ecx_20 != edi_14)
    if (data_cf65bc != 0)
        char* eax_46 = *edx_17
        
        if (eax_46 != 0 && *eax_46 != 0)
            char* eax_47 = sub_63d4e0(edx_17)
            int32_t temp9_1 = *(eax_47 + 4)
            *(eax_47 + 4) -= 1
            
            if (temp9_1 != 1)
                edx_17 = &arg1[0x1096]
            else
                sub_64c080(eax_47, *(eax_47 + 0xc) + 0x10)
                edx_17 = &arg1[0x1096]
                *edx_17 = &data_801800
    
    char* eax_48 = arg2[0x1096]
    *edx_17 = eax_48
    
    if (eax_48 != 0 && *eax_48 != 0)
        char* eax_49 = sub_63d4e0(edx_17)
        *(eax_49 + 4) += 1

void* edi_15 = &arg1[0x10b7]
arg1[0x1097] = arg2[0x1097]
int32_t i_11 = 0x80
*(arg1 + 0x4260) = *(arg2 + 0x4260)
*(arg1 + 0x4270) = *(arg2 + 0x4270)
*(arg1 + 0x4280) = *(arg2 + 0x4280)
*(arg1 + 0x4290) = *(arg2 + 0x4290)
*(arg1 + 0x42a0) = *(arg2 + 0x42a0)
arg1[0x10ac] = arg2[0x10ac]
arg1[0x10ad] = arg2[0x10ad]
arg1[0x10ae] = arg2[0x10ae]
arg1[0x10af] = arg2[0x10af]
arg1[0x10b0] = arg2[0x10b0]
arg1[0x10b1] = arg2[0x10b1]
arg1[0x10b2] = arg2[0x10b2]
arg1[0x10b3] = arg2[0x10b3]
arg1[0x10b4] = arg2[0x10b4]
arg1[0x10b5] = arg2[0x10b5]
void* esi_16 = &arg2[0x10b9]
int32_t i_2

do
    *(edi_15 - 4) = *(esi_16 - 0xc)
    *edi_15 = *(eax_3 + edi_15)
    *(edi_15 + 4) = *(esi_16 - 4)
    *(edi_15 + 8) = *esi_16
    int32_t ecx_24 = *(esi_16 + 8)
    *(edi_15 + 0xc) = *(esi_16 + 4)
    *(edi_15 + 0x10) = ecx_24
    int32_t ecx_25 = *(esi_16 + 0x10)
    *(edi_15 + 0x14) = *(esi_16 + 0xc)
    *(edi_15 + 0x18) = ecx_25
    sub_63d850(edi_15 + 0x1c, esi_16 + 0x14)
    i_2 = i_11
    i_11 -= 1
    esi_16 += 0x28
    edi_15 += 0x28
while (i_2 != 1)
arg1[0x15b6] = arg2[0x15b6]
*(arg1 + 0x56dc) = *(arg2 + 0x56dc)
arg1[0x15b9] = arg2[0x15b9]
__builtin_memcpy(&arg1[0x15ba], &arg2[0x15ba], 0x204)
__builtin_memcpy(&arg1[0x163b], &arg2[0x163b], 0xaf4)
__builtin_memcpy(&arg1[0x18f8], &arg2[0x18f8], 0xaf4)
void* edi_19 = &arg1[0x1bb8]
arg1[0x1bb5] = arg2[0x1bb5]
arg1[0x1bb6] = arg2[0x1bb6]
void* esi_22 = &arg2[0x1bb7]
int32_t i_12 = 0x40
int32_t i_3

do
    sub_63d850(edi_19 - 4, esi_22)
    sub_63d850(edi_19, &arg2[0x1bb7] - &arg1[0x1bb7] + edi_19)
    int32_t eax_78 = *(esi_22 + 8)
    esi_22 += 0xc
    *(edi_19 + 4) = eax_78
    edi_19 += 0xc
    i_3 = i_12
    i_12 -= 1
while (i_3 != 1)
int32_t* edi_20 = &arg1[0x1c88]
arg1[0x1c77] = arg2[0x1c77]
*(arg1 + 0x71e0) = *(arg2 + 0x71e0)
arg1[0x1c7c] = arg2[0x1c7c]
*(arg1 + 0x71f4) = *(arg2 + 0x71f4)
arg1[0x1c7f] = arg2[0x1c7f]
*(arg1 + 0x7200) = *(arg2 + 0x7200)
arg1[0x1c82] = arg2[0x1c82]
*(arg1 + 0x720c) = *(arg2 + 0x720c)
arg1[0x1c85] = arg2[0x1c85]
arg1[0x1c86] = arg2[0x1c86]
void* ecx_32 = &arg2[0x1c87] - &arg1[0x1c87]
void* esi_24 = &arg2[0x1c87]
void* var_18_1 = ecx_32
int32_t i_13 = 0xf
int32_t i_4

do
    edi_20[-1] = *esi_24
    sub_63d850(edi_20, ecx_32 + edi_20)
    int32_t eax_89 = *(esi_24 + 8)
    esi_24 += 0xc
    ecx_32 = var_18_1
    edi_20[1] = eax_89
    edi_20 = &edi_20[3]
    i_4 = i_13
    i_13 -= 1
while (i_4 != 1)
int32_t i_14 = 0x28
void* edx_21 = &arg1[0x1cc4]
arg1[0x1cb4] = arg2[0x1cb4]
int32_t eax_91
eax_91.b = arg2[0x1cb5].b
arg1[0x1cb5].b = eax_91.b
*(arg1 + 0x72d8) = *(arg2 + 0x72d8)
arg1[0x1cba] = arg2[0x1cba]
*(arg1 + 0x72ec) = *(arg2 + 0x72ec)
arg1[0x1cbd] = arg2[0x1cbd]
*(arg1 + 0x72f8) = *(arg2 + 0x72f8)
arg1[0x1cc0] = arg2[0x1cc0]
*(arg1 + 0x7304) = *(arg2 + 0x7304)
arg1[0x1cc3] = arg2[0x1cc3]
int32_t i_5

do
    int32_t eax_96 = *(edx_21 + eax_3)
    edx_21 += 4
    *(edx_21 - 4) = eax_96
    i_5 = i_14
    i_14 -= 1
while (i_5 != 1)
void* edx_22 = &arg1[0x1cec]
int32_t i_15 = 0x28
int32_t i_6

do
    int32_t eax_97 = *(eax_3 + edx_22)
    edx_22 += 4
    *(edx_22 - 4) = eax_97
    i_6 = i_15
    i_15 -= 1
while (i_6 != 1)
void* edx_23 = &arg1[0x1d15]
arg1[0x1d14] = arg2[0x1d14]
int32_t i_16 = 0x80
int32_t i_7

do
    int32_t eax_99 = *(eax_3 + edx_23)
    edx_23 += 4
    *(edx_23 - 4) = eax_99
    i_7 = i_16
    i_16 -= 1
while (i_7 != 1)
int32_t* edx_24 = &arg1[0x1d95]
int32_t i_17 = 0x80
int32_t eax_100
int32_t i_8

do
    eax_100 = *(edx_24 + eax_3)
    edx_24 = &edx_24[1]
    edx_24[-1] = eax_100
    i_8 = i_17
    i_17 -= 1
while (i_8 != 1)
eax_100.b = arg2[0x1e15].b
arg1[0x1e15].b = eax_100.b
*(arg1 + 0x7858) = *(arg2 + 0x7858)
arg1[0x1e18] = arg2[0x1e18]
return arg1
