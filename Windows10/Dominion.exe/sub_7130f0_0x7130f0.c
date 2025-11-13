// 函数: sub_7130f0
// 地址: 0x7130f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = data_147ded8
int32_t* result

if (eax == 0)
    result = malloc(0x74)
else
    result = eax(0x74, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Skeleton.c", 0x3c)

if (result != 0)
    memset(&result[1], 0, 0x70)

int32_t ecx = data_147ded8
*result = arg1
int32_t eax_2 = *(arg1 + 0x20)
result[1] = eax_2
int32_t _Size = eax_2 << 2
int32_t eax_3

if (ecx == 0)
    eax_3 = malloc(_Size)
else
    eax_3 = ecx(_Size, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Skeleton.c", 0x41)

int32_t esi_1 = result[1]
result[2] = eax_3
int32_t eax_4 = data_147ded8
int32_t esi_2 = esi_1 << 2
int32_t var_8
int32_t edx

if (eax_4 == 0)
    int32_t eax_6 = malloc(esi_2)
    var_8 = eax_6
    edx = eax_6
else
    edx = eax_4(esi_2, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Skeleton.c", 0x42)
    var_8 = edx

if (edx != 0)
    memset(edx, 0, esi_2)
    edx = var_8

int32_t eax_15 = result[1]
int32_t esi_3 = 0

if (eax_15 s> 0)
    do
        int32_t eax_8 = *(*result + 0x24)
        void* ebx_1 = *(eax_8 + (esi_3 << 2))
        int32_t* ecx_1 = *(ebx_1 + 8)
        int32_t* ecx_3
        
        if (ecx_1 != 0)
            int32_t eax_10 = result[2]
            edx = var_8
            ecx_3 = sub_7101b0(eax_10, result, ebx_1, *(eax_10 + (*ecx_1 << 2)))
            int32_t eax_13 = **(ebx_1 + 8)
            *(edx + (eax_13 << 2)) += 1
        else
            edx = var_8
            ecx_3 = sub_7101b0(eax_8, result, ebx_1, ecx_1)
        
        *(result[2] + (esi_3 << 2)) = ecx_3
        esi_3 += 1
        eax_15 = result[1]
    while (esi_3 s< eax_15)

int32_t esi_4 = 0

if (eax_15 s> 0)
    do
        int32_t ecx_6 = data_147ded8
        void* ebx_2 = *(result[2] + (esi_4 << 2))
        int32_t _Size_1 = *(edx + (**(*(*result + 0x24) + (esi_4 << 2)) << 2)) << 2
        int32_t eax_22
        
        if (ecx_6 == 0)
            eax_22 = malloc(_Size_1)
        else
            eax_22 =
                ecx_6(_Size_1, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Skeleton.c", 0x53)
        
        edx = var_8
        esi_4 += 1
        *(ebx_2 + 0x10) = eax_22
        eax_15 = result[1]
    while (esi_4 s< eax_15)

int32_t esi_5 = 0
int32_t eax_25

if (eax_15 s> 0)
    do
        void* ebx_3 = *(result[2] + (esi_5 << 2))
        void* edx_2 = *(ebx_3 + 8)
        
        if (edx_2 != 0)
            *(*(edx_2 + 0x10) + (*(edx_2 + 0xc) << 2)) = ebx_3
            *(edx_2 + 0xc) += 1
        
        eax_25 = result[1]
        esi_5 += 1
    while (esi_5 s< eax_25)

int32_t eax_27

if (eax_15 s<= 0 || eax_25 s<= 0)
    eax_27 = 0
else
    eax_27 = *result[2]

void* esi_6 = arg1
int32_t ecx_8 = data_147ded8
result[3] = eax_27
int32_t eax_28 = *(esi_6 + 0x28)
result[4] = eax_28
int32_t _Size_2 = eax_28 << 2
int32_t eax_29

if (ecx_8 == 0)
    eax_29 = malloc(_Size_2)
else
    eax_29 = ecx_8(_Size_2, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Skeleton.c", 0x5e)

result[5] = eax_29
int32_t ebx_4 = 0
int32_t eax_30 = result[4]

if (eax_30 s> 0)
    do
        void* eax_32 = *(*(esi_6 + 0x2c) + (ebx_4 << 2))
        int32_t eax_35 = *(result[2] + (**(eax_32 + 8) << 2))
        int32_t eax_36 = data_147ded8
        void** eax_37
        
        if (eax_36 == 0)
            eax_37 = malloc(0x30)
        else
            eax_37 = eax_36(0x30, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Slot.c", 0x27)
        
        if (eax_37 != 0)
            __builtin_memset(&eax_37[3], 0, 0x24)
        
        eax_37[1] = eax_35
        *eax_37 = eax_32
        eax_37[2] = 0x3f800000
        eax_37[3] = 0x3f800000
        eax_37[4] = 0x3f800000
        eax_37[5] = 0x3f800000
        sub_752330(&eax_37[2])
        int32_t eax_39
        
        if (*(eax_32 + 0x20) != 0)
            int32_t eax_40 = data_147ded8
            
            if (eax_40 == 0)
                eax_39 = malloc(0x10)
            else
                eax_39 =
                    eax_40(0x10, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Color.c", 0x22)
        else
            eax_39 = 0
        
        eax_37[6] = eax_39
        sub_7551a0(eax_37)
        *(result[5] + (ebx_4 << 2)) = eax_37
        ebx_4 += 1
        eax_30 = result[4]
        esi_6 = arg1
    while (ebx_4 s< eax_30)

int32_t ecx_13 = data_147ded8
int32_t _Size_3 = eax_30 << 2
int32_t eax_42

if (ecx_13 == 0)
    eax_42 = malloc(_Size_3)
else
    eax_42 = ecx_13(_Size_3, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Skeleton.c", 0x65)

int32_t count = result[4] << 2
int32_t var_2c = result[5]
result[6] = eax_42
memcpy(eax_42, var_2c, count)
int32_t eax_44 = *(esi_6 + 0x4c)
int32_t ecx_15 = data_147ded8
result[7] = eax_44
int32_t _Size_4 = eax_44 << 2
int32_t eax_45

if (ecx_15 == 0)
    eax_45 = malloc(_Size_4)
else
    eax_45 = ecx_15(_Size_4, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Skeleton.c", 0x69)

result[8] = eax_45
int32_t i = 0
void* eax_46 = *result
int32_t i_3 = 0

if (*(eax_46 + 0x4c) s> 0)
    do
        void* ebx_5 = *(*(eax_46 + 0x50) + (i << 2))
        int32_t eax_48 = data_147ded8
        int32_t* eax_49
        
        if (eax_48 == 0)
            eax_49 = malloc(0x28)
        else
            eax_49 = eax_48(0x28, 
                "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\IkConstraint.c", 0x26)
        
        if (eax_49 != 0)
            __builtin_memset(eax_49, 0, 0x28)
        
        int32_t ecx_16 = data_147ded8
        *eax_49 = ebx_5
        eax_49[4] = *(ebx_5 + 0x18)
        eax_49[5] = *(ebx_5 + 0x1c)
        eax_49[6] = *(ebx_5 + 0x20)
        eax_49[7] = *(ebx_5 + 0x28)
        eax_49[8] = *(ebx_5 + 0x2c)
        int32_t eax_55 = *(ebx_5 + 0xc)
        eax_49[1] = eax_55
        int32_t _Size_5 = eax_55 << 2
        int32_t eax_56
        
        if (ecx_16 == 0)
            eax_56 = malloc(_Size_5)
        else
            eax_56 = ecx_16(_Size_5, 
                "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\IkConstraint.c", 0x2f)
        
        int32_t j = 0
        eax_49[2] = eax_56
        
        if (eax_49[1] s> 0)
            do
                *(eax_49[2] + (j << 2)) = sub_714700(result, *(*(*(*eax_49 + 0x10) + (j << 2)) + 4))
                j += 1
            while (j s< eax_49[1])
        
        eax_49[3] = sub_714700(result, *(*(*eax_49 + 0x14) + 4))
        *(result[8] + (i_3 << 2)) = eax_49
        i = i_3 + 1
        eax_46 = *result
        i_3 = i
    while (i s< *(eax_46 + 0x4c))
    
    esi_6 = arg1

int32_t eax_63 = *(esi_6 + 0x54)
int32_t ecx_21 = data_147ded8
result[9] = eax_63
int32_t _Size_6 = eax_63 << 2
int32_t eax_64

if (ecx_21 == 0)
    eax_64 = malloc(_Size_6)
else
    eax_64 = ecx_21(_Size_6, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Skeleton.c", 0x6e)

result[0xa] = eax_64
int32_t i_1 = 0
void* eax_65 = *result
int32_t i_4 = 0

if (*(eax_65 + 0x54) s> 0)
    do
        void* ebx_6 = *(*(eax_65 + 0x58) + (i_1 << 2))
        int32_t eax_67 = data_147ded8
        void** eax_68
        
        if (eax_67 == 0)
            eax_68 = malloc(0x24)
        else
            eax_68 = eax_67(0x24, 
                "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\TransformConstraint.c", 0x24)
        
        if (eax_68 != 0)
            __builtin_memset(&eax_68[1], 0, 0x20)
        
        int32_t ecx_22 = data_147ded8
        *eax_68 = ebx_6
        eax_68[4] = *(ebx_6 + 0x18)
        eax_68[5] = *(ebx_6 + 0x1c)
        eax_68[6] = *(ebx_6 + 0x20)
        eax_68[7] = *(ebx_6 + 0x24)
        int32_t eax_73 = *(ebx_6 + 0xc)
        eax_68[1] = eax_73
        int32_t _Size_7 = eax_73 << 2
        int32_t eax_74
        
        if (ecx_22 == 0)
            eax_74 = malloc(_Size_7)
        else
            eax_74 = ecx_22(_Size_7, 
                "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\TransformConstraint.c", 0x2b)
        
        int32_t j_1 = 0
        eax_68[2] = eax_74
        
        if (eax_68[1] s> 0)
            do
                *(eax_68[2] + (j_1 << 2)) =
                    sub_714700(result, *(*(*(*eax_68 + 0x10) + (j_1 << 2)) + 4))
                j_1 += 1
            while (j_1 s< eax_68[1])
        
        eax_68[3] = sub_714700(result, *(*(*eax_68 + 0x14) + 4))
        *(result[0xa] + (i_4 << 2)) = eax_68
        i_1 = i_4 + 1
        eax_65 = *result
        i_4 = i_1
    while (i_1 s< *(eax_65 + 0x54))
    
    esi_6 = arg1

int32_t eax_81 = *(esi_6 + 0x5c)
int32_t ecx_27 = data_147ded8
result[0xb] = eax_81
int32_t _Size_8 = eax_81 << 2
int32_t eax_82

if (ecx_27 == 0)
    eax_82 = malloc(_Size_8)
else
    eax_82 = ecx_27(_Size_8, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Skeleton.c", 0x73)

result[0xc] = eax_82
int32_t ecx_28 = 0
void* eax_83 = *result
int32_t var_c_1 = 0

if (*(eax_83 + 0x5c) s> 0)
    while (true)
        void* ebx_7 = *(*(eax_83 + 0x60) + (ecx_28 << 2))
        int32_t eax_85 = data_147ded8
        int32_t* eax_86
        
        if (eax_85 == 0)
            eax_86 = malloc(0x74)
        else
            eax_86 = eax_85(0x74, 
                "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\PathConstraint.c", 0x29)
        
        if (eax_86 != 0)
            memset(&eax_86[1], 0, 0x70)
        
        int32_t ecx_29 = data_147ded8
        *eax_86 = ebx_7
        int32_t eax_88 = *(ebx_7 + 0xc)
        eax_86[1] = eax_88
        int32_t _Size_9 = eax_88 << 2
        int32_t eax_89
        
        if (ecx_29 == 0)
            eax_89 = malloc(_Size_9)
        else
            eax_89 = ecx_29(_Size_9, 
                "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\PathConstraint.c", 0x2c)
        
        int32_t i_2 = 0
        eax_86[2] = eax_89
        
        if (eax_86[1] s> 0)
            do
                *(eax_86[2] + (i_2 << 2)) =
                    sub_714700(result, *(*(*(*eax_86 + 0x10) + (i_2 << 2)) + 4))
                i_2 += 1
            while (i_2 s< eax_86[1])
        
        int32_t ebx_8 = 0
        char* ecx_32 = *(*(*eax_86 + 0x14) + 4)
        char* var_14_2 = ecx_32
        int32_t eax_102
        
        if (result[4] s<= 0)
        label_7137af:
            eax_102 = 0
        else
            int32_t* eax_96 = *(*result + 0x2c)
            int32_t* var_10_2 = eax_96
            
            while (true)
                char* eax_98 = *(*eax_96 + 4)
                int32_t eax_100
                
                while (true)
                    char edx_11 = *eax_98
                    char temp0_1 = *ecx_32
                    bool c_1 = edx_11 u< temp0_1
                    
                    if (edx_11 == temp0_1)
                        if (edx_11 == 0)
                            eax_100 = 0
                            break
                        
                        edx_11 = eax_98[1]
                        char temp1_1 = ecx_32[1]
                        c_1 = edx_11 u< temp1_1
                        
                        if (edx_11 == temp1_1)
                            eax_98 = &eax_98[2]
                            ecx_32 = &ecx_32[2]
                            
                            if (edx_11 != 0)
                                continue
                            
                            eax_100 = 0
                            break
                    
                    eax_100 = sbb.d(eax_98, eax_98, c_1) | 1
                    break
                
                if (eax_100 == 0)
                    eax_102 = *(result[5] + (ebx_8 << 2))
                    break
                
                ebx_8 += 1
                ecx_32 = var_14_2
                eax_96 = &var_10_2[1]
                var_10_2 = eax_96
                
                if (ebx_8 s>= result[4])
                    goto label_7137af
        
        eax_86[3] = eax_102
        eax_86[4] = *(ebx_7 + 0x28)
        eax_86[5] = *(ebx_7 + 0x2c)
        eax_86[6] = *(ebx_7 + 0x30)
        eax_86[7] = *(ebx_7 + 0x34)
        __builtin_memset(&eax_86[8], 0, 0x28)
        *(result[0xc] + (var_c_1 << 2)) = eax_86
        ecx_28 = var_c_1 + 1
        eax_83 = *result
        var_c_1 = ecx_28
        
        if (ecx_28 s>= *(eax_83 + 0x5c))
            break

result[0xe] = 0x3f800000
result[0xf] = 0x3f800000
result[0x10] = 0x3f800000
result[0x11] = 0x3f800000
sub_752330(&result[0xe])
result[0x13] = 0x3f800000
result[0x14] = 0x3f800000
sub_714370(result)
free(var_8)
return result
