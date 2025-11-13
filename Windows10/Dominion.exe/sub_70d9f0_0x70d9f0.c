// 函数: sub_70d9f0
// 地址: 0x70d9f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = data_147ded8
int32_t* eax_1

if (eax == 0)
    eax_1 = malloc(8)
else
    eax_1 = eax(8, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x372)

*eax_1 = arg2
eax_1[1] = arg4 + arg2
free(arg3[2])
int32_t eax_4 = data_147ded8
arg3[2] = 0
arg3[4] = 0
int32_t* result_1
int32_t* result

if (eax_4 == 0)
    int32_t* result_2 = malloc(0x64)
    result_1 = result_2
    result = result_2
else
    result = eax_4(0x64, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SkeletonData.c", 0x23)
    result_1 = result

if (result != 0)
    memset(result, 0, 0x64)

char* eax_6 = sub_7088b0(eax_1)
char* edx = eax_6
char* ecx_1 = eax_6
result[1] = edx

do
    eax_6.b = *ecx_1
    ecx_1 = &ecx_1[1]
while (eax_6.b != 0)

if (ecx_1 == &ecx_1[1])
    free(edx)
    result[1] = 0

char* eax_7 = sub_7088b0(eax_1)
char* edx_1 = eax_7
char* ecx_4 = eax_7
*result = edx_1

do
    eax_7.b = *ecx_4
    ecx_4 = &ecx_4[1]
while (eax_7.b != 0)

if (ecx_4 == &ecx_4[1])
    free(edx_1)
    *result = 0

char* eax_8 = *eax_1
char ecx_5 = *eax_8
*eax_1 = &eax_8[1]
edx_1.b = eax_8[1]
*eax_1 = &eax_8[2]
void* ebx_2
ebx_2.b = eax_8[2]
*eax_1 = &eax_8[3]
edx_1:1.b = eax_8[3]
*eax_1 = &eax_8[4]
result[2] = ((zx.d(ecx_5) << 8 | zx.d(edx_1.b)) << 8 | zx.d(ebx_2.b)) << 8 | zx.d(edx_1:1.b)
char* eax_16 = *eax_1
uint32_t ecx_12
ecx_12.b = *eax_16
*eax_1 = &eax_16[1]
edx_1.b = eax_16[1]
*eax_1 = &eax_16[2]
ebx_2.b = eax_16[2]
*eax_1 = &eax_16[3]
edx_1:1.b = eax_16[3]
*eax_1 = &eax_16[4]
result[3] = ((zx.d(ecx_12.b) << 8 | zx.d(edx_1.b)) << 8 | zx.d(ebx_2.b)) << 8 | zx.d(edx_1:1.b)
char* eax_24 = *eax_1
uint32_t ecx_19
ecx_19.b = *eax_24
*eax_1 = &eax_24[1]
edx_1.b = eax_24[1]
*eax_1 = &eax_24[2]
ebx_2.b = eax_24[2]
*eax_1 = &eax_24[3]
edx_1:1.b = eax_24[3]
*eax_1 = &eax_24[4]
result[4] = ((zx.d(ecx_19.b) << 8 | zx.d(edx_1.b)) << 8 | zx.d(ebx_2.b)) << 8 | zx.d(edx_1:1.b)
char* eax_32 = *eax_1
uint32_t ecx_26
ecx_26.b = *eax_32
*eax_1 = &eax_32[1]
edx_1.b = eax_32[1]
*eax_1 = &eax_32[2]
ebx_2.b = eax_32[2]
*eax_1 = &eax_32[3]
edx_1:1.b = eax_32[3]
*eax_1 = &eax_32[4]
result[5] = ((zx.d(ecx_26.b) << 8 | zx.d(edx_1.b)) << 8 | zx.d(ebx_2.b)) << 8 | zx.d(edx_1:1.b)
char* eax_40 = *eax_1
uint32_t ecx_33
ecx_33.b = *eax_40
arg4:3.b = ecx_33.b
*eax_1 = &eax_40[1]
int32_t edx_2
edx_2.b = ecx_33.b != 0

if (ecx_33.b != 0)
    *eax_1 = &eax_40[5]
    free(sub_7088b0(eax_1))
    free(sub_7088b0(eax_1))

char* eax_45 = *eax_1
ecx_33.b = *eax_45
int32_t ebx_4 = zx.d(ecx_33.b) & 0x7f
*eax_1 = &eax_45[1]

if (ecx_33.b s< 0)
    ecx_33.b = eax_45[1]
    *eax_1 = &eax_45[2]
    ebx_4 |= (zx.d(ecx_33.b) & 0x7f) << 7
    
    if (ecx_33.b s< 0)
        ecx_33.b = eax_45[2]
        *eax_1 = &eax_45[3]
        ebx_4 |= (zx.d(ecx_33.b) & 0x7f) << 0xe
        
        if (ecx_33.b s< 0)
            ecx_33.b = eax_45[3]
            *eax_1 = &eax_45[4]
            ebx_4 |= (zx.d(ecx_33.b) & 0x7f) << 0x15
            
            if (ecx_33.b s< 0)
                ecx_33.b = eax_45[4]
                *eax_1 = &eax_45[5]
                ebx_4 |= zx.d(ecx_33.b) << 0x1c

int32_t ecx_36 = data_147ded8
int32_t _Size = ebx_4 << 2
result[6] = ebx_4
int32_t eax_58
int32_t ecx_37

if (ecx_36 == 0)
    eax_58, ecx_37 = malloc(_Size)
else
    eax_58, ecx_37 =
        ecx_36(_Size, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x397)

result[7] = eax_58
int32_t var_18 = 0

if (ebx_4 s> 0)
    int32_t edx_8
    
    do
        *(result[7] + (var_18 << 2)) = sub_7088b0(eax_1)
        edx_8 = var_18 + 1
        var_18 = edx_8
    while (edx_8 s< ebx_4)

char* eax_60 = *eax_1
ecx_37.b = *eax_60
int32_t ebx_6 = zx.d(ecx_37.b) & 0x7f
*eax_1 = &eax_60[1]

if (ecx_37.b s< 0)
    ecx_37.b = eax_60[1]
    *eax_1 = &eax_60[2]
    ebx_6 |= (zx.d(ecx_37.b) & 0x7f) << 7
    
    if (ecx_37.b s< 0)
        ecx_37.b = eax_60[2]
        *eax_1 = &eax_60[3]
        ebx_6 |= (zx.d(ecx_37.b) & 0x7f) << 0xe
        
        if (ecx_37.b s< 0)
            ecx_37.b = eax_60[3]
            *eax_1 = &eax_60[4]
            ebx_6 |= (zx.d(ecx_37.b) & 0x7f) << 0x15
            
            if (ecx_37.b s< 0)
                ecx_37.b = eax_60[4]
                *eax_1 = &eax_60[5]
                ebx_6 |= zx.d(ecx_37.b) << 0x1c

int32_t eax_73 = data_147ded8
result[8] = ebx_6
int32_t _Size_5 = ebx_6 << 2
int32_t eax_74
uint32_t ecx_39

if (eax_73 == 0)
    eax_74, ecx_39 = malloc(_Size_5)
else
    eax_74, ecx_39 =
        eax_73(_Size_5, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x39e)

int32_t i = 0
result[9] = eax_74
int32_t i_11 = 0

if (result[8] s> 0)
    do
        char* eax_75 = sub_7088b0(eax_1)
        int32_t i_9
        
        if (i != 0)
            char* eax_76 = *eax_1
            char ecx_41 = *eax_76
            int32_t edx_14 = zx.d(ecx_41) & 0x7f
            *eax_1 = &eax_76[1]
            
            if (ecx_41 s< 0)
                ecx_41 = eax_76[1]
                *eax_1 = &eax_76[2]
                edx_14 |= (zx.d(ecx_41) & 0x7f) << 7
                
                if (ecx_41 s< 0)
                    ecx_41 = eax_76[2]
                    *eax_1 = &eax_76[3]
                    edx_14 |= (zx.d(ecx_41) & 0x7f) << 0xe
                    
                    if (ecx_41 s< 0)
                        ecx_41 = eax_76[3]
                        *eax_1 = &eax_76[4]
                        edx_14 |= (zx.d(ecx_41) & 0x7f) << 0x15
                        
                        if (ecx_41 s< 0)
                            ecx_41 = eax_76[4]
                            *eax_1 = &eax_76[5]
                            edx_14 |= zx.d(ecx_41) << 0x1c
            
            i_9 = *(result[9] + (edx_14 << 2))
        else
            i_9 = i
        
        int32_t eax_91 = data_147ded8
        int32_t* var_c_1
        int32_t* ebx_11
        
        if (eax_91 == 0)
            int32_t* eax_93 = malloc(0x34)
            var_c_1 = eax_93
            ebx_11 = eax_93
        else
            ebx_11 =
                eax_91(0x34, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\BoneData.c", 0x22)
            var_c_1 = ebx_11
        
        if (ebx_11 != 0)
            __builtin_memset(&ebx_11[1], 0, 0x30)
        
        char* ecx_42 = eax_75
        *ebx_11 = i_11
        void* var_24_1 = &ecx_42[1]
        void* eax_95
        
        do
            eax_95.b = *ecx_42
            ecx_42 = &ecx_42[1]
        while (eax_95.b != 0)
        int32_t eax_96 = data_147ded8
        int32_t eax_97
        
        if (eax_96 == 0)
            eax_97 = malloc(ecx_42 - var_24_1 + 1)
        else
            eax_97 = eax_96(ecx_42 - var_24_1 + 1, 
                "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\BoneData.c", 0x24)
        
        char* ecx_45 = eax_75
        ebx_11[1] = eax_97
        void* edx_16 = eax_97 - eax_75
        
        do
            eax_97.b = *ecx_45
            ecx_45 = &ecx_45[1]
            *(edx_16 + ecx_45 - 1) = eax_97.b
        while (eax_97.b != 0)
        
        ebx_11[2] = i_9
        ebx_11[7] = 0x3f800000
        ebx_11[8] = 0x3f800000
        ebx_11[0xb] = 0
        free(eax_75)
        char* eax_99 = *eax_1
        char ecx_46 = *eax_99
        *eax_1 = &eax_99[1]
        int16_t edx_17
        edx_17:1.b = eax_99[1]
        *eax_1 = &eax_99[2]
        edx_17.b = eax_99[2]
        *eax_1 = &eax_99[3]
        ebx_11.b = eax_99[3]
        *eax_1 = &eax_99[4]
        var_c_1[6] =
            ((zx.d(ecx_46) << 8 | zx.d(edx_17:1.b)) << 8 | zx.d(edx_17.b)) << 8 | zx.d(ebx_11.b)
        char* eax_108 = *eax_1
        uint32_t ecx_53
        ecx_53.b = *eax_108
        *eax_1 = &eax_108[1]
        edx_17:1.b = eax_108[1]
        *eax_1 = &eax_108[2]
        edx_17.b = eax_108[2]
        *eax_1 = &eax_108[3]
        ebx_11.b = eax_108[3]
        *eax_1 = &eax_108[4]
        var_c_1[4] = (((zx.d(ecx_53.b) << 8 | zx.d(edx_17:1.b)) << 8 | zx.d(edx_17.b)) << 8
            | zx.d(ebx_11.b)) * *arg3
        char* eax_118 = *eax_1
        uint32_t ecx_60
        ecx_60.b = *eax_118
        *eax_1 = &eax_118[1]
        edx_17:1.b = eax_118[1]
        *eax_1 = &eax_118[2]
        edx_17.b = eax_118[2]
        *eax_1 = &eax_118[3]
        ebx_11.b = eax_118[3]
        *eax_1 = &eax_118[4]
        var_c_1[5] = (((zx.d(ecx_60.b) << 8 | zx.d(edx_17:1.b)) << 8 | zx.d(edx_17.b)) << 8
            | zx.d(ebx_11.b)) * *arg3
        char* eax_128 = *eax_1
        uint32_t ecx_67
        ecx_67.b = *eax_128
        *eax_1 = &eax_128[1]
        edx_17:1.b = eax_128[1]
        *eax_1 = &eax_128[2]
        edx_17.b = eax_128[2]
        *eax_1 = &eax_128[3]
        ebx_11.b = eax_128[3]
        *eax_1 = &eax_128[4]
        var_c_1[7] =
            ((zx.d(ecx_67.b) << 8 | zx.d(edx_17:1.b)) << 8 | zx.d(edx_17.b)) << 8 | zx.d(ebx_11.b)
        char* eax_137 = *eax_1
        uint32_t ecx_74
        ecx_74.b = *eax_137
        *eax_1 = &eax_137[1]
        edx_17:1.b = eax_137[1]
        *eax_1 = &eax_137[2]
        edx_17.b = eax_137[2]
        *eax_1 = &eax_137[3]
        ebx_11.b = eax_137[3]
        *eax_1 = &eax_137[4]
        var_c_1[8] =
            ((zx.d(ecx_74.b) << 8 | zx.d(edx_17:1.b)) << 8 | zx.d(edx_17.b)) << 8 | zx.d(ebx_11.b)
        char* eax_146 = *eax_1
        uint32_t ecx_81
        ecx_81.b = *eax_146
        *eax_1 = &eax_146[1]
        edx_17:1.b = eax_146[1]
        *eax_1 = &eax_146[2]
        edx_17.b = eax_146[2]
        *eax_1 = &eax_146[3]
        ebx_11.b = eax_146[3]
        *eax_1 = &eax_146[4]
        var_c_1[9] =
            ((zx.d(ecx_81.b) << 8 | zx.d(edx_17:1.b)) << 8 | zx.d(edx_17.b)) << 8 | zx.d(ebx_11.b)
        char* eax_155 = *eax_1
        uint32_t ecx_88
        ecx_88.b = *eax_155
        *eax_1 = &eax_155[1]
        edx_17:1.b = eax_155[1]
        *eax_1 = &eax_155[2]
        edx_17.b = eax_155[2]
        *eax_1 = &eax_155[3]
        ebx_11.b = eax_155[3]
        *eax_1 = &eax_155[4]
        var_c_1[0xa] =
            ((zx.d(ecx_88.b) << 8 | zx.d(edx_17:1.b)) << 8 | zx.d(edx_17.b)) << 8 | zx.d(ebx_11.b)
        char* eax_164 = *eax_1
        uint32_t ecx_95
        ecx_95.b = *eax_164
        *eax_1 = &eax_164[1]
        edx_17:1.b = eax_164[1]
        *eax_1 = &eax_164[2]
        edx_17.b = eax_164[2]
        *eax_1 = &eax_164[3]
        ebx_11.b = eax_164[3]
        *eax_1 = &eax_164[4]
        var_c_1[3] = (((zx.d(ecx_95.b) << 8 | zx.d(edx_17:1.b)) << 8 | zx.d(edx_17.b)) << 8
            | zx.d(ebx_11.b)) * *arg3
        char* eax_173 = *eax_1
        ecx_39.b = *eax_173
        int32_t ebx_13 = zx.d(ecx_39.b) & 0x7f
        *eax_1 = &eax_173[1]
        
        if (ecx_39.b s< 0)
            ecx_39.b = eax_173[1]
            *eax_1 = &eax_173[2]
            ebx_13 |= (zx.d(ecx_39.b) & 0x7f) << 7
            
            if (ecx_39.b s< 0)
                ecx_39.b = eax_173[2]
                *eax_1 = &eax_173[3]
                ebx_13 |= (zx.d(ecx_39.b) & 0x7f) << 0xe
                
                if (ecx_39.b s< 0)
                    ecx_39.b = eax_173[3]
                    *eax_1 = &eax_173[4]
                    ebx_13 |= (zx.d(ecx_39.b) & 0x7f) << 0x15
                    
                    if (ecx_39.b s< 0)
                        ecx_39.b = eax_173[4]
                        *eax_1 = &eax_173[5]
                        ebx_13 |= zx.d(ecx_39.b) << 0x1c
        
        switch (ebx_13)
            case 0
                var_c_1[0xb] = 0
            case 1
                var_c_1[0xb] = 1
            case 2
                var_c_1[0xb] = 2
            case 3
                var_c_1[0xb] = 3
            case 4
                var_c_1[0xb] = 4
        
        char* eax_193 = *eax_1
        ecx_39.b = *eax_193
        *eax_1 = &eax_193[1]
        int32_t eax_195
        eax_195.b = ecx_39.b != 0
        var_c_1[0xc] = eax_195
        
        if (arg4:3.b != 0)
            *eax_1 += 4
        
        *(result[9] + (i_11 << 2)) = var_c_1
        i = i_11 + 1
        i_11 = i
    while (i s< result[8])

char* eax_197 = *eax_1
ecx_39.b = *eax_197
int32_t ebx_16 = zx.d(ecx_39.b) & 0x7f
*eax_1 = &eax_197[1]

if (ecx_39.b s< 0)
    ecx_39.b = eax_197[1]
    *eax_1 = &eax_197[2]
    ebx_16 |= (zx.d(ecx_39.b) & 0x7f) << 7
    
    if (ecx_39.b s< 0)
        ecx_39.b = eax_197[2]
        *eax_1 = &eax_197[3]
        ebx_16 |= (zx.d(ecx_39.b) & 0x7f) << 0xe
        
        if (ecx_39.b s< 0)
            ecx_39.b = eax_197[3]
            *eax_1 = &eax_197[4]
            ebx_16 |= (zx.d(ecx_39.b) & 0x7f) << 0x15
            
            if (ecx_39.b s< 0)
                ecx_39.b = eax_197[4]
                *eax_1 = &eax_197[5]
                ebx_16 |= zx.d(ecx_39.b) << 0x1c

int32_t eax_210 = data_147ded8
result[0xa] = ebx_16
int32_t _Size_6 = ebx_16 << 2
int32_t eax_211
int32_t i_1

if (eax_210 == 0)
    eax_211, i_1 = malloc(_Size_6)
else
    eax_211, i_1 = eax_210(_Size_6, 
        "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x3be)

bool cond:1 = result[0xa] s<= 0
result[0xb] = eax_211
int32_t i_12 = 0

if (not(cond:1))
    do
        char* eax_212 = sub_7088b0(eax_1)
        char* ecx_103 = *eax_1
        char edx_23 = *ecx_103
        void* eax_213 = &ecx_103[1]
        int32_t ebx_18 = zx.d(edx_23) & 0x7f
        *eax_1 = eax_213
        
        if (edx_23 s< 0)
            ecx_103.b = *eax_213
            *eax_1 = eax_213 + 1
            ebx_18 |= (zx.d(ecx_103.b) & 0x7f) << 7
            
            if (ecx_103.b s< 0)
                ecx_103.b = *(eax_213 + 1)
                *eax_1 = eax_213 + 2
                ebx_18 |= (zx.d(ecx_103.b) & 0x7f) << 0xe
                
                if (ecx_103.b s< 0)
                    ecx_103.b = *(eax_213 + 2)
                    *eax_1 = eax_213 + 3
                    ebx_18 |= (zx.d(ecx_103.b) & 0x7f) << 0x15
                    
                    if (ecx_103.b s< 0)
                        ecx_103.b = *(eax_213 + 3)
                        *eax_1 = eax_213 + 4
                        ebx_18 |= zx.d(ecx_103.b) << 0x1c
        
        int32_t eax_227 = *(result[9] + (ebx_18 << 2))
        int32_t eax_228 = data_147ded8
        uint32_t ebx_19
        
        if (eax_228 == 0)
            uint32_t eax_230 = malloc(0x28)
            arg4 = eax_230
            ebx_19 = eax_230
        else
            ebx_19 =
                eax_228(0x28, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SlotData.c", 0x22)
            arg4 = ebx_19
        
        if (ebx_19 != 0)
            __builtin_memset(ebx_19, 0, 0x28)
        
        char* ecx_104 = eax_212
        *ebx_19 = i_12
        void* edx_27 = &ecx_104[1]
        int32_t eax_231
        
        do
            eax_231.b = *ecx_104
            ecx_104 = &ecx_104[1]
        while (eax_231.b != 0)
        int32_t eax_232 = data_147ded8
        void* eax_233
        
        if (eax_232 == 0)
            eax_233 = malloc(ecx_104 - edx_27 + 1)
        else
            eax_233 = eax_232(ecx_104 - edx_27 + 1, 
                "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SlotData.c", 0x24)
        
        void* ecx_107 = eax_233
        *(ebx_19 + 4) = ecx_107
        char* edx_29 = eax_212 - ecx_107
        
        do
            eax_233.b = *(edx_29 + ecx_107)
            ecx_107 += 1
            *(ecx_107 - 1) = eax_233.b
        while (eax_233.b != 0)
        
        *(ebx_19 + 8) = eax_227
        *(ebx_19 + 0x10) = 0x3f800000
        *(ebx_19 + 0x14) = 0x3f800000
        *(ebx_19 + 0x18) = 0x3f800000
        *(ebx_19 + 0x1c) = 0x3f800000
        sub_752330(ebx_19 + 0x10)
        free(eax_212)
        char* eax_235 = *eax_1
        int16_t ecx_109
        ecx_109.b = *eax_235
        *eax_1 = &eax_235[1]
        *(ebx_19 + 0x10) = _mm_cvtepi32_ps(zx.o(ecx_109.b)) / 255f
        char* eax_238 = *eax_1
        ecx_109.b = *eax_238
        *eax_1 = &eax_238[1]
        *(ebx_19 + 0x14) = _mm_cvtepi32_ps(zx.o(ecx_109.b)) / 255f
        char* eax_241 = *eax_1
        ecx_109.b = *eax_241
        *eax_1 = &eax_241[1]
        *(ebx_19 + 0x18) = _mm_cvtepi32_ps(zx.o(ecx_109.b)) / 255f
        char* eax_244 = *eax_1
        ecx_109.b = *eax_244
        *eax_1 = &eax_244[1]
        *(ebx_19 + 0x1c) = _mm_cvtepi32_ps(zx.o(ecx_109.b)) / 255f
        char* eax_247 = *eax_1
        ecx_109:1.b = *eax_247
        *eax_1 = &eax_247[1]
        ecx_109.b = eax_247[1]
        *eax_1 = &eax_247[2]
        uint32_t var_1c_2 = zx.d(ecx_109.b)
        uint32_t eax_249
        eax_249.b = eax_247[2]
        uint32_t eax_250 = zx.d(eax_249.b)
        *eax_1 = &eax_247[3]
        ecx_109.b = eax_247[3]
        *eax_1 = &eax_247[4]
        uint32_t esi_2 = zx.d(ecx_109.b)
        
        if (var_1c_2 != 0xff || eax_250 != 0xff || esi_2 != 0xff || ecx_109:1.b != 0xff)
            int32_t eax_252 = data_147ded8
            float* eax_253
            
            if (eax_252 == 0)
                eax_253 = malloc(0x10)
            else
                eax_253 =
                    eax_252(0x10, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Color.c", 0x22)
            
            float xmm0_28 = _mm_cvtepi32_ps(zx.o(var_1c_2))
            *(ebx_19 + 0x20) = eax_253
            eax_253[3] = 0x3f800000
            *eax_253 = xmm0_28 / 255f
            eax_253[1] = _mm_cvtepi32_ps(zx.o(eax_250)) / 255f
            eax_253[2] = _mm_cvtepi32_ps(zx.o(esi_2)) / 255f
            sub_752330(eax_253)
        
        result = result_1
        char* eax_254
        void* ecx_112
        eax_254, ecx_112 = sub_708970(eax_1, result)
        char* ebx_20 = eax_254
        uint32_t edx_34
        
        if (ebx_20 == 0)
            edx_34 = arg4
            *(edx_34 + 0xc) = 0
        else
            char* ecx_113 = ebx_20
            void* edx_33 = &ecx_113[1]
            
            do
                eax_254.b = *ecx_113
                ecx_113 = &ecx_113[1]
            while (eax_254.b != 0)
            
            int32_t eax_255 = data_147ded8
            int32_t eax_256
            
            if (eax_255 == 0)
                eax_256 = malloc(ecx_113 - edx_33 + 1)
            else
                eax_256 = eax_255(ecx_113 - edx_33 + 1, 
                    "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x3d1)
            
            edx_34 = arg4
            *(edx_34 + 0xc) = eax_256
            ecx_112 = eax_256 - ebx_20
            
            do
                eax_256.b = *ebx_20
                ebx_20 = &ebx_20[1]
                *(ecx_112 + ebx_20 - 1) = eax_256.b
            while (eax_256.b != 0)
        
        char* eax_257 = *eax_1
        ecx_112.b = *eax_257
        int32_t ebx_22 = zx.d(ecx_112.b) & 0x7f
        *eax_1 = &eax_257[1]
        
        if (ecx_112.b s< 0)
            ecx_112.b = eax_257[1]
            *eax_1 = &eax_257[2]
            ebx_22 |= (zx.d(ecx_112.b) & 0x7f) << 7
            
            if (ecx_112.b s< 0)
                ecx_112.b = eax_257[2]
                *eax_1 = &eax_257[3]
                ebx_22 |= (zx.d(ecx_112.b) & 0x7f) << 0xe
                
                if (ecx_112.b s< 0)
                    ecx_112.b = eax_257[3]
                    *eax_1 = &eax_257[4]
                    ebx_22 |= (zx.d(ecx_112.b) & 0x7f) << 0x15
                    
                    if (ecx_112.b s< 0)
                        ecx_112.b = eax_257[4]
                        *eax_1 = &eax_257[5]
                        ebx_22 |= zx.d(ecx_112.b) << 0x1c
        
        *(edx_34 + 0x24) = ebx_22
        *(result[0xb] + (i_12 << 2)) = edx_34
        i_1 = i_12 + 1
        i_12 = i_1
    while (i_1 s< result[0xa])

char* eax_278 = *eax_1
i_1.b = *eax_278
int32_t ebx_24 = zx.d(i_1.b) & 0x7f
*eax_1 = &eax_278[1]

if (i_1.b s< 0)
    i_1.b = eax_278[1]
    *eax_1 = &eax_278[2]
    ebx_24 |= (zx.d(i_1.b) & 0x7f) << 7
    
    if (i_1.b s< 0)
        i_1.b = eax_278[2]
        *eax_1 = &eax_278[3]
        ebx_24 |= (zx.d(i_1.b) & 0x7f) << 0xe
        
        if (i_1.b s< 0)
            i_1.b = eax_278[3]
            *eax_1 = &eax_278[4]
            ebx_24 |= (zx.d(i_1.b) & 0x7f) << 0x15
            
            if (i_1.b s< 0)
                i_1.b = eax_278[4]
                *eax_1 = &eax_278[5]
                ebx_24 |= zx.d(i_1.b) << 0x1c

int32_t eax_291 = data_147ded8
result[0x13] = ebx_24
int32_t _Size_7 = ebx_24 << 2
int32_t eax_292
uint32_t ecx_118

if (eax_291 == 0)
    eax_292, ecx_118 = malloc(_Size_7)
else
    eax_292, ecx_118 = eax_291(_Size_7, 
        "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x3d9)

bool cond:2 = result[0x13] s<= 0
result[0x14] = eax_292
int32_t i_13 = 0

if (not(cond:2))
    int32_t i_2
    
    do
        char* eax_293 = sub_7088b0(eax_1)
        int32_t eax_294 = data_147ded8
        int32_t* var_14_4
        int32_t* eax_295
        int32_t* ebx_25
        
        if (eax_294 == 0)
            eax_295 = malloc(0x30)
            var_14_4 = eax_295
            ebx_25 = eax_295
        else
            ebx_25 = eax_294(0x30, 
                "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\IkConstraintData.c", 0x22)
            var_14_4 = ebx_25
        
        if (ebx_25 != 0)
            memset(ebx_25, 0, 0x30)
        
        char* ecx_120 = eax_293
        void* edx_39 = &ecx_120[1]
        
        do
            eax_295.b = *ecx_120
            ecx_120 = &ecx_120[1]
        while (eax_295.b != 0)
        
        int32_t eax_296 = data_147ded8
        void* eax_297
        
        if (eax_296 == 0)
            eax_297 = malloc(ecx_120 - edx_39 + 1)
        else
            eax_297 = eax_296(ecx_120 - edx_39 + 1, 
                "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\IkConstraintData.c", 0x23)
        
        void* ecx_123 = eax_297
        *ebx_25 = ecx_123
        char* edx_41 = eax_293 - ecx_123
        
        do
            eax_297.b = *(edx_41 + ecx_123)
            ecx_123 += 1
            *(ecx_123 - 1) = eax_297.b
        while (eax_297.b != 0)
        
        ebx_25[6] = 1
        ebx_25[7] = 0
        ebx_25[8] = 0
        ebx_25[9] = 0
        ebx_25[0xa] = 0x3f800000
        char* eax_298 = *eax_1
        ecx_123.b = *eax_298
        int32_t edx_43 = zx.d(ecx_123.b) & 0x7f
        *eax_1 = &eax_298[1]
        
        if (ecx_123.b s< 0)
            ecx_123.b = eax_298[1]
            *eax_1 = &eax_298[2]
            edx_43 |= (zx.d(ecx_123.b) & 0x7f) << 7
            
            if (ecx_123.b s< 0)
                ecx_123.b = eax_298[2]
                *eax_1 = &eax_298[3]
                edx_43 |= (zx.d(ecx_123.b) & 0x7f) << 0xe
                
                if (ecx_123.b s< 0)
                    ecx_123.b = eax_298[3]
                    *eax_1 = &eax_298[4]
                    edx_43 |= (zx.d(ecx_123.b) & 0x7f) << 0x15
                    
                    if (ecx_123.b s< 0)
                        ecx_123.b = eax_298[4]
                        *eax_1 = &eax_298[5]
                        edx_43 |= zx.d(ecx_123.b) << 0x1c
        
        ebx_25[1] = edx_43
        char* eax_318 = *eax_1
        ecx_123.b = *eax_318
        *eax_1 = &eax_318[1]
        int32_t eax_320
        eax_320.b = ecx_123.b != 0
        ebx_25[2] = eax_320
        free(eax_293)
        char* eax_321 = *eax_1
        char ecx_124 = *eax_321
        int32_t edx_45 = zx.d(ecx_124) & 0x7f
        *eax_1 = &eax_321[1]
        
        if (ecx_124 s< 0)
            ecx_124 = eax_321[1]
            *eax_1 = &eax_321[2]
            edx_45 |= (zx.d(ecx_124) & 0x7f) << 7
            
            if (ecx_124 s< 0)
                ecx_124 = eax_321[2]
                *eax_1 = &eax_321[3]
                edx_45 |= (zx.d(ecx_124) & 0x7f) << 0xe
                
                if (ecx_124 s< 0)
                    ecx_124 = eax_321[3]
                    *eax_1 = &eax_321[4]
                    edx_45 |= (zx.d(ecx_124) & 0x7f) << 0x15
                    
                    if (ecx_124 s< 0)
                        ecx_124 = eax_321[4]
                        *eax_1 = &eax_321[5]
                        edx_45 |= zx.d(ecx_124) << 0x1c
        
        int32_t eax_341 = data_147ded8
        ebx_25[3] = edx_45
        int32_t _Size_2 = edx_45 << 2
        int32_t eax_342
        int32_t ecx_125
        
        if (eax_341 == 0)
            eax_342, ecx_125 = malloc(_Size_2)
        else
            eax_342, ecx_125 = eax_341(_Size_2, 
                "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x3e2)
        
        bool cond:8_1 = ebx_25[3] s<= 0
        ebx_25[4] = eax_342
        int32_t j_3 = 0
        
        if (not(cond:8_1))
            int32_t j
            
            do
                char* eax_343 = *eax_1
                ecx_125.b = *eax_343
                int32_t edx_47 = zx.d(ecx_125.b) & 0x7f
                *eax_1 = &eax_343[1]
                
                if (ecx_125.b s< 0)
                    ecx_125.b = eax_343[1]
                    *eax_1 = &eax_343[2]
                    edx_47 |= (zx.d(ecx_125.b) & 0x7f) << 7
                    
                    if (ecx_125.b s< 0)
                        ecx_125.b = eax_343[2]
                        *eax_1 = &eax_343[3]
                        edx_47 |= (zx.d(ecx_125.b) & 0x7f) << 0xe
                        
                        if (ecx_125.b s< 0)
                            ecx_125.b = eax_343[3]
                            *eax_1 = &eax_343[4]
                            edx_47 |= (zx.d(ecx_125.b) & 0x7f) << 0x15
                            
                            if (ecx_125.b s< 0)
                                ecx_125.b = eax_343[4]
                                *eax_1 = &eax_343[5]
                                edx_47 |= zx.d(ecx_125.b) << 0x1c
                
                *(ebx_25[4] + (j_3 << 2)) = *(result[9] + (edx_47 << 2))
                j = j_3 + 1
                j_3 = j
            while (j s< ebx_25[3])
        
        char* eax_365 = *eax_1
        ecx_125.b = *eax_365
        int32_t edx_50 = zx.d(ecx_125.b) & 0x7f
        *eax_1 = &eax_365[1]
        
        if (ecx_125.b s< 0)
            ecx_125.b = eax_365[1]
            *eax_1 = &eax_365[2]
            edx_50 |= (zx.d(ecx_125.b) & 0x7f) << 7
            
            if (ecx_125.b s< 0)
                ecx_125.b = eax_365[2]
                *eax_1 = &eax_365[3]
                edx_50 |= (zx.d(ecx_125.b) & 0x7f) << 0xe
                
                if (ecx_125.b s< 0)
                    ecx_125.b = eax_365[3]
                    *eax_1 = &eax_365[4]
                    edx_50 |= (zx.d(ecx_125.b) & 0x7f) << 0x15
                    
                    if (ecx_125.b s< 0)
                        ecx_125.b = eax_365[4]
                        *eax_1 = &eax_365[5]
                        edx_50 |= zx.d(ecx_125.b) << 0x1c
        
        ebx_25[5] = *(result[9] + (edx_50 << 2))
        char* eax_387 = *eax_1
        ecx_125.b = *eax_387
        *eax_1 = &eax_387[1]
        edx_50:1.b = eax_387[1]
        *eax_1 = &eax_387[2]
        edx_50.b = eax_387[2]
        *eax_1 = &eax_387[3]
        ebx_25.b = eax_387[3]
        *eax_1 = &eax_387[4]
        var_14_4[0xa] =
            ((zx.d(ecx_125.b) << 8 | zx.d(edx_50:1.b)) << 8 | zx.d(edx_50.b)) << 8 | zx.d(ebx_25.b)
        char* eax_396 = *eax_1
        uint32_t ecx_132
        ecx_132.b = *eax_396
        *eax_1 = &eax_396[1]
        edx_50:1.b = eax_396[1]
        *eax_1 = &eax_396[2]
        edx_50.b = eax_396[2]
        *eax_1 = &eax_396[3]
        ebx_25.b = eax_396[3]
        *eax_1 = &eax_396[4]
        var_14_4[0xb] =
            ((zx.d(ecx_132.b) << 8 | zx.d(edx_50:1.b)) << 8 | zx.d(edx_50.b)) << 8 | zx.d(ebx_25.b)
        char* eax_404 = *eax_1
        ecx_118.b = *eax_404
        *eax_1 = &eax_404[1]
        var_14_4[6] = sx.d(ecx_118.b)
        char* eax_407 = *eax_1
        ecx_118.b = *eax_407
        *eax_1 = &eax_407[1]
        int32_t eax_409
        eax_409.b = ecx_118.b != 0
        var_14_4[7] = eax_409
        char* eax_410 = *eax_1
        ecx_118.b = *eax_410
        *eax_1 = &eax_410[1]
        int32_t eax_412
        eax_412.b = ecx_118.b != 0
        var_14_4[8] = eax_412
        char* eax_413 = *eax_1
        ecx_118.b = *eax_413
        *eax_1 = &eax_413[1]
        int32_t eax_415
        eax_415.b = ecx_118.b != 0
        var_14_4[9] = eax_415
        *(result[0x14] + (i_13 << 2)) = var_14_4
        i_2 = i_13 + 1
        i_13 = i_2
    while (i_2 s< result[0x13])

char* eax_417 = *eax_1
ecx_118.b = *eax_417
int32_t ebx_28 = zx.d(ecx_118.b) & 0x7f
*eax_1 = &eax_417[1]

if (ecx_118.b s< 0)
    ecx_118.b = eax_417[1]
    *eax_1 = &eax_417[2]
    ebx_28 |= (zx.d(ecx_118.b) & 0x7f) << 7
    
    if (ecx_118.b s< 0)
        ecx_118.b = eax_417[2]
        *eax_1 = &eax_417[3]
        ebx_28 |= (zx.d(ecx_118.b) & 0x7f) << 0xe
        
        if (ecx_118.b s< 0)
            ecx_118.b = eax_417[3]
            *eax_1 = &eax_417[4]
            ebx_28 |= (zx.d(ecx_118.b) & 0x7f) << 0x15
            
            if (ecx_118.b s< 0)
                ecx_118.b = eax_417[4]
                *eax_1 = &eax_417[5]
                ebx_28 |= zx.d(ecx_118.b) << 0x1c

int32_t eax_430 = data_147ded8
result[0x15] = ebx_28
int32_t _Size_8 = ebx_28 << 2
int32_t eax_431
uint32_t ecx_139

if (eax_430 == 0)
    eax_431, ecx_139 = malloc(_Size_8)
else
    eax_431, ecx_139 = eax_430(_Size_8, 
        "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x3f2)

bool cond:3 = result[0x15] s<= 0
result[0x16] = eax_431
int32_t i_14 = 0

if (not(cond:3))
    int32_t i_3
    
    do
        char* eax_432 = sub_7088b0(eax_1)
        int32_t eax_433 = data_147ded8
        uint32_t eax_434
        uint32_t ebx_29
        
        if (eax_433 == 0)
            eax_434 = malloc(0x48)
            arg4 = eax_434
            ebx_29 = eax_434
        else
            ebx_29 = eax_433(0x48, 
                "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\TransformConstraintData.c", 0x22)
            arg4 = ebx_29
        
        if (ebx_29 != 0)
            memset(ebx_29, 0, 0x48)
        
        char* ecx_141 = eax_432
        void* edx_56 = &ecx_141[1]
        
        do
            eax_434.b = *ecx_141
            ecx_141 = &ecx_141[1]
        while (eax_434.b != 0)
        
        int32_t eax_435 = data_147ded8
        char* eax_436
        
        if (eax_435 == 0)
            eax_436 = malloc(ecx_141 - edx_56 + 1)
        else
            eax_436 = eax_435(ecx_141 - edx_56 + 1, 
                "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\TransformConstraintData.c", 0x23)
        
        char* ecx_144 = eax_436
        *ebx_29 = ecx_144
        void* edx_58 = eax_432 - ecx_144
        
        do
            eax_436.b = *(ecx_144 + edx_58)
            ecx_144 = &ecx_144[1]
            ecx_144[0xffffffff] = eax_436.b
        while (eax_436.b != 0)
        
        char* eax_437 = *eax_1
        ecx_144.b = *eax_437
        int32_t edx_60 = zx.d(ecx_144.b) & 0x7f
        *eax_1 = &eax_437[1]
        
        if (ecx_144.b s< 0)
            ecx_144.b = eax_437[1]
            *eax_1 = &eax_437[2]
            edx_60 |= (zx.d(ecx_144.b) & 0x7f) << 7
            
            if (ecx_144.b s< 0)
                ecx_144.b = eax_437[2]
                *eax_1 = &eax_437[3]
                edx_60 |= (zx.d(ecx_144.b) & 0x7f) << 0xe
                
                if (ecx_144.b s< 0)
                    ecx_144.b = eax_437[3]
                    *eax_1 = &eax_437[4]
                    edx_60 |= (zx.d(ecx_144.b) & 0x7f) << 0x15
                    
                    if (ecx_144.b s< 0)
                        ecx_144.b = eax_437[4]
                        *eax_1 = &eax_437[5]
                        edx_60 |= zx.d(ecx_144.b) << 0x1c
        
        *(ebx_29 + 4) = edx_60
        char* eax_457 = *eax_1
        ecx_144.b = *eax_457
        *eax_1 = &eax_457[1]
        int32_t eax_459
        eax_459.b = ecx_144.b != 0
        *(ebx_29 + 8) = eax_459
        free(eax_432)
        char* eax_460 = *eax_1
        char ecx_145 = *eax_460
        int32_t edx_62 = zx.d(ecx_145) & 0x7f
        *eax_1 = &eax_460[1]
        
        if (ecx_145 s< 0)
            ecx_145 = eax_460[1]
            *eax_1 = &eax_460[2]
            edx_62 |= (zx.d(ecx_145) & 0x7f) << 7
            
            if (ecx_145 s< 0)
                ecx_145 = eax_460[2]
                *eax_1 = &eax_460[3]
                edx_62 |= (zx.d(ecx_145) & 0x7f) << 0xe
                
                if (ecx_145 s< 0)
                    ecx_145 = eax_460[3]
                    *eax_1 = &eax_460[4]
                    edx_62 |= (zx.d(ecx_145) & 0x7f) << 0x15
                    
                    if (ecx_145 s< 0)
                        ecx_145 = eax_460[4]
                        *eax_1 = &eax_460[5]
                        edx_62 |= zx.d(ecx_145) << 0x1c
        
        int32_t eax_480 = data_147ded8
        *(ebx_29 + 0xc) = edx_62
        int32_t _Size_3 = edx_62 << 2
        int32_t eax_481
        int32_t ecx_146
        
        if (eax_480 == 0)
            eax_481, ecx_146 = malloc(_Size_3)
        else
            eax_481, ecx_146 = eax_480(_Size_3, 
                "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x3fb)
        
        bool cond:10_1 = *(ebx_29 + 0xc) s<= 0
        *(ebx_29 + 0x10) = eax_481
        int32_t j_4 = 0
        
        if (not(cond:10_1))
            int32_t j_1
            
            do
                char* eax_482 = *eax_1
                ecx_146.b = *eax_482
                int32_t edx_64 = zx.d(ecx_146.b) & 0x7f
                *eax_1 = &eax_482[1]
                
                if (ecx_146.b s< 0)
                    ecx_146.b = eax_482[1]
                    *eax_1 = &eax_482[2]
                    edx_64 |= (zx.d(ecx_146.b) & 0x7f) << 7
                    
                    if (ecx_146.b s< 0)
                        ecx_146.b = eax_482[2]
                        *eax_1 = &eax_482[3]
                        edx_64 |= (zx.d(ecx_146.b) & 0x7f) << 0xe
                        
                        if (ecx_146.b s< 0)
                            ecx_146.b = eax_482[3]
                            *eax_1 = &eax_482[4]
                            edx_64 |= (zx.d(ecx_146.b) & 0x7f) << 0x15
                            
                            if (ecx_146.b s< 0)
                                ecx_146.b = eax_482[4]
                                *eax_1 = &eax_482[5]
                                edx_64 |= zx.d(ecx_146.b) << 0x1c
                
                *(*(ebx_29 + 0x10) + (j_4 << 2)) = *(result[9] + (edx_64 << 2))
                j_1 = j_4 + 1
                j_4 = j_1
            while (j_1 s< *(ebx_29 + 0xc))
        
        char* eax_504 = *eax_1
        ecx_146.b = *eax_504
        int32_t edx_67 = zx.d(ecx_146.b) & 0x7f
        *eax_1 = &eax_504[1]
        
        if (ecx_146.b s< 0)
            ecx_146.b = eax_504[1]
            *eax_1 = &eax_504[2]
            edx_67 |= (zx.d(ecx_146.b) & 0x7f) << 7
            
            if (ecx_146.b s< 0)
                ecx_146.b = eax_504[2]
                *eax_1 = &eax_504[3]
                edx_67 |= (zx.d(ecx_146.b) & 0x7f) << 0xe
                
                if (ecx_146.b s< 0)
                    ecx_146.b = eax_504[3]
                    *eax_1 = &eax_504[4]
                    edx_67 |= (zx.d(ecx_146.b) & 0x7f) << 0x15
                    
                    if (ecx_146.b s< 0)
                        ecx_146.b = eax_504[4]
                        *eax_1 = &eax_504[5]
                        edx_67 |= zx.d(ecx_146.b) << 0x1c
        
        *(ebx_29 + 0x14) = *(result[9] + (edx_67 << 2))
        char* eax_526 = *eax_1
        ecx_146.b = *eax_526
        *eax_1 = &eax_526[1]
        int32_t eax_528
        eax_528.b = ecx_146.b != 0
        *(ebx_29 + 0x44) = eax_528
        char* eax_529 = *eax_1
        ecx_146.b = *eax_529
        *eax_1 = &eax_529[1]
        int32_t eax_531
        eax_531.b = ecx_146.b != 0
        *(ebx_29 + 0x40) = eax_531
        char* eax_532 = *eax_1
        ecx_146.b = *eax_532
        *eax_1 = &eax_532[1]
        edx_67:1.b = eax_532[1]
        *eax_1 = &eax_532[2]
        edx_67.b = eax_532[2]
        *eax_1 = &eax_532[3]
        ebx_29.b = eax_532[3]
        *eax_1 = &eax_532[4]
        *(arg4 + 0x28) =
            ((zx.d(ecx_146.b) << 8 | zx.d(edx_67:1.b)) << 8 | zx.d(edx_67.b)) << 8 | zx.d(ebx_29.b)
        char* eax_541 = *eax_1
        uint32_t ecx_153
        ecx_153.b = *eax_541
        *eax_1 = &eax_541[1]
        edx_67:1.b = eax_541[1]
        *eax_1 = &eax_541[2]
        edx_67.b = eax_541[2]
        *eax_1 = &eax_541[3]
        ebx_29.b = eax_541[3]
        *eax_1 = &eax_541[4]
        *(arg4 + 0x2c) = (((zx.d(ecx_153.b) << 8 | zx.d(edx_67:1.b)) << 8 | zx.d(edx_67.b)) << 8
            | zx.d(ebx_29.b)) * *arg3
        char* eax_551 = *eax_1
        uint32_t ecx_160
        ecx_160.b = *eax_551
        *eax_1 = &eax_551[1]
        edx_67:1.b = eax_551[1]
        *eax_1 = &eax_551[2]
        edx_67.b = eax_551[2]
        *eax_1 = &eax_551[3]
        ebx_29.b = eax_551[3]
        *eax_1 = &eax_551[4]
        *(arg4 + 0x30) = (((zx.d(ecx_160.b) << 8 | zx.d(edx_67:1.b)) << 8 | zx.d(edx_67.b)) << 8
            | zx.d(ebx_29.b)) * *arg3
        char* eax_561 = *eax_1
        uint32_t ecx_167
        ecx_167.b = *eax_561
        *eax_1 = &eax_561[1]
        edx_67:1.b = eax_561[1]
        *eax_1 = &eax_561[2]
        edx_67.b = eax_561[2]
        *eax_1 = &eax_561[3]
        ebx_29.b = eax_561[3]
        *eax_1 = &eax_561[4]
        *(arg4 + 0x34) =
            ((zx.d(ecx_167.b) << 8 | zx.d(edx_67:1.b)) << 8 | zx.d(edx_67.b)) << 8 | zx.d(ebx_29.b)
        char* eax_570 = *eax_1
        uint32_t ecx_174
        ecx_174.b = *eax_570
        *eax_1 = &eax_570[1]
        edx_67:1.b = eax_570[1]
        *eax_1 = &eax_570[2]
        edx_67.b = eax_570[2]
        *eax_1 = &eax_570[3]
        ebx_29.b = eax_570[3]
        *eax_1 = &eax_570[4]
        *(arg4 + 0x38) =
            ((zx.d(ecx_174.b) << 8 | zx.d(edx_67:1.b)) << 8 | zx.d(edx_67.b)) << 8 | zx.d(ebx_29.b)
        char* eax_579 = *eax_1
        uint32_t ecx_181
        ecx_181.b = *eax_579
        *eax_1 = &eax_579[1]
        edx_67:1.b = eax_579[1]
        *eax_1 = &eax_579[2]
        edx_67.b = eax_579[2]
        *eax_1 = &eax_579[3]
        ebx_29.b = eax_579[3]
        *eax_1 = &eax_579[4]
        *(arg4 + 0x3c) =
            ((zx.d(ecx_181.b) << 8 | zx.d(edx_67:1.b)) << 8 | zx.d(edx_67.b)) << 8 | zx.d(ebx_29.b)
        char* eax_588 = *eax_1
        uint32_t ecx_188
        ecx_188.b = *eax_588
        *eax_1 = &eax_588[1]
        edx_67:1.b = eax_588[1]
        *eax_1 = &eax_588[2]
        edx_67.b = eax_588[2]
        *eax_1 = &eax_588[3]
        ebx_29.b = eax_588[3]
        *eax_1 = &eax_588[4]
        *(arg4 + 0x18) =
            ((zx.d(ecx_188.b) << 8 | zx.d(edx_67:1.b)) << 8 | zx.d(edx_67.b)) << 8 | zx.d(ebx_29.b)
        char* eax_597 = *eax_1
        uint32_t ecx_195
        ecx_195.b = *eax_597
        *eax_1 = &eax_597[1]
        edx_67:1.b = eax_597[1]
        *eax_1 = &eax_597[2]
        edx_67.b = eax_597[2]
        *eax_1 = &eax_597[3]
        ebx_29.b = eax_597[3]
        *eax_1 = &eax_597[4]
        *(arg4 + 0x1c) =
            ((zx.d(ecx_195.b) << 8 | zx.d(edx_67:1.b)) << 8 | zx.d(edx_67.b)) << 8 | zx.d(ebx_29.b)
        char* eax_606 = *eax_1
        uint32_t ecx_202
        ecx_202.b = *eax_606
        *eax_1 = &eax_606[1]
        edx_67:1.b = eax_606[1]
        *eax_1 = &eax_606[2]
        edx_67.b = eax_606[2]
        *eax_1 = &eax_606[3]
        ebx_29.b = eax_606[3]
        *eax_1 = &eax_606[4]
        *(arg4 + 0x20) =
            ((zx.d(ecx_202.b) << 8 | zx.d(edx_67:1.b)) << 8 | zx.d(edx_67.b)) << 8 | zx.d(ebx_29.b)
        char* eax_615 = *eax_1
        uint32_t ecx_209
        ecx_209.b = *eax_615
        *eax_1 = &eax_615[1]
        edx_67:1.b = eax_615[1]
        *eax_1 = &eax_615[2]
        edx_67.b = eax_615[2]
        *eax_1 = &eax_615[3]
        ebx_29.b = eax_615[3]
        *eax_1 = &eax_615[4]
        *(arg4 + 0x24) =
            ((zx.d(ecx_209.b) << 8 | zx.d(edx_67:1.b)) << 8 | zx.d(edx_67.b)) << 8 | zx.d(ebx_29.b)
        *(result[0x16] + (i_14 << 2)) = arg4
        i_3 = i_14 + 1
        i_14 = i_3
    while (i_3 s< result[0x15])

char* eax_624 = *eax_1
ecx_139.b = *eax_624
int32_t ebx_32 = zx.d(ecx_139.b) & 0x7f
*eax_1 = &eax_624[1]

if (ecx_139.b s< 0)
    ecx_139.b = eax_624[1]
    *eax_1 = &eax_624[2]
    ebx_32 |= (zx.d(ecx_139.b) & 0x7f) << 7
    
    if (ecx_139.b s< 0)
        ecx_139.b = eax_624[2]
        *eax_1 = &eax_624[3]
        ebx_32 |= (zx.d(ecx_139.b) & 0x7f) << 0xe
        
        if (ecx_139.b s< 0)
            ecx_139.b = eax_624[3]
            *eax_1 = &eax_624[4]
            ebx_32 |= (zx.d(ecx_139.b) & 0x7f) << 0x15
            
            if (ecx_139.b s< 0)
                ecx_139.b = eax_624[4]
                *eax_1 = &eax_624[5]
                ebx_32 |= zx.d(ecx_139.b) << 0x1c

int32_t eax_637 = data_147ded8
result[0x17] = ebx_32
int32_t _Size_9 = ebx_32 << 2
int32_t eax_638

if (eax_637 == 0)
    eax_638 = malloc(_Size_9)
else
    eax_638 = eax_637(_Size_9, 
        "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x410)

bool cond:6 = result[0x17] s<= 0
result[0x18] = eax_638
int32_t i_15 = 0

if (not(cond:6))
    int32_t i_4
    
    do
        char* eax_639 = sub_7088b0(eax_1)
        int32_t eax_640 = data_147ded8
        uint32_t ebx_33
        
        if (eax_640 == 0)
            uint32_t eax_642 = malloc(0x38)
            arg4 = eax_642
            ebx_33 = eax_642
        else
            ebx_33 = eax_640(0x38, 
                "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\PathConstraintData.c", 0x22)
            arg4 = ebx_33
        
        if (ebx_33 != 0)
            memset(ebx_33, 0, 0x38)
        
        char* ecx_218 = eax_639
        void* var_24_21 = &ecx_218[1]
        void* eax_643
        
        do
            eax_643.b = *ecx_218
            ecx_218 = &ecx_218[1]
        while (eax_643.b != 0)
        int32_t eax_644 = data_147ded8
        int32_t eax_645
        
        if (eax_644 == 0)
            eax_645 = malloc(ecx_218 - var_24_21 + 1)
        else
            eax_645 = eax_644(ecx_218 - var_24_21 + 1, 
                "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\PathConstraintData.c", 0x23)
        
        char* ecx_221 = eax_639
        *ebx_33 = eax_645
        void* edx_73 = eax_645 - eax_639
        
        do
            eax_645.b = *ecx_221
            ecx_221 = &ecx_221[1]
            *(ecx_221 + edx_73 - 1) = eax_645.b
        while (eax_645.b != 0)
        
        char* eax_646 = *eax_1
        ecx_221.b = *eax_646
        int32_t edx_75 = zx.d(ecx_221.b) & 0x7f
        *eax_1 = &eax_646[1]
        
        if (ecx_221.b s< 0)
            ecx_221.b = eax_646[1]
            *eax_1 = &eax_646[2]
            edx_75 |= (zx.d(ecx_221.b) & 0x7f) << 7
            
            if (ecx_221.b s< 0)
                ecx_221.b = eax_646[2]
                *eax_1 = &eax_646[3]
                edx_75 |= (zx.d(ecx_221.b) & 0x7f) << 0xe
                
                if (ecx_221.b s< 0)
                    ecx_221.b = eax_646[3]
                    *eax_1 = &eax_646[4]
                    edx_75 |= (zx.d(ecx_221.b) & 0x7f) << 0x15
                    
                    if (ecx_221.b s< 0)
                        ecx_221.b = eax_646[4]
                        *eax_1 = &eax_646[5]
                        edx_75 |= zx.d(ecx_221.b) << 0x1c
        
        *(ebx_33 + 4) = edx_75
        char* eax_666 = *eax_1
        ecx_221.b = *eax_666
        *eax_1 = &eax_666[1]
        int32_t eax_668
        eax_668.b = ecx_221.b != 0
        *(ebx_33 + 8) = eax_668
        free(eax_639)
        char* eax_669 = *eax_1
        char ecx_222 = *eax_669
        int32_t edx_77 = zx.d(ecx_222) & 0x7f
        *eax_1 = &eax_669[1]
        
        if (ecx_222 s< 0)
            ecx_222 = eax_669[1]
            *eax_1 = &eax_669[2]
            edx_77 |= (zx.d(ecx_222) & 0x7f) << 7
            
            if (ecx_222 s< 0)
                ecx_222 = eax_669[2]
                *eax_1 = &eax_669[3]
                edx_77 |= (zx.d(ecx_222) & 0x7f) << 0xe
                
                if (ecx_222 s< 0)
                    ecx_222 = eax_669[3]
                    *eax_1 = &eax_669[4]
                    edx_77 |= (zx.d(ecx_222) & 0x7f) << 0x15
                    
                    if (ecx_222 s< 0)
                        ecx_222 = eax_669[4]
                        *eax_1 = &eax_669[5]
                        edx_77 |= zx.d(ecx_222) << 0x1c
        
        int32_t eax_689 = data_147ded8
        *(ebx_33 + 0xc) = edx_77
        int32_t _Size_4 = edx_77 << 2
        int32_t eax_690
        int32_t ecx_223
        
        if (eax_689 == 0)
            eax_690, ecx_223 = malloc(_Size_4)
        else
            eax_690, ecx_223 = eax_689(_Size_4, 
                "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x419)
        
        bool cond:13_1 = *(ebx_33 + 0xc) s<= 0
        *(ebx_33 + 0x10) = eax_690
        int32_t j_5 = 0
        
        if (not(cond:13_1))
            int32_t j_2
            
            do
                char* eax_691 = *eax_1
                ecx_223.b = *eax_691
                int32_t edx_79 = zx.d(ecx_223.b) & 0x7f
                *eax_1 = &eax_691[1]
                
                if (ecx_223.b s< 0)
                    ecx_223.b = eax_691[1]
                    *eax_1 = &eax_691[2]
                    edx_79 |= (zx.d(ecx_223.b) & 0x7f) << 7
                    
                    if (ecx_223.b s< 0)
                        ecx_223.b = eax_691[2]
                        *eax_1 = &eax_691[3]
                        edx_79 |= (zx.d(ecx_223.b) & 0x7f) << 0xe
                        
                        if (ecx_223.b s< 0)
                            ecx_223.b = eax_691[3]
                            *eax_1 = &eax_691[4]
                            edx_79 |= (zx.d(ecx_223.b) & 0x7f) << 0x15
                            
                            if (ecx_223.b s< 0)
                                ecx_223.b = eax_691[4]
                                *eax_1 = &eax_691[5]
                                edx_79 |= zx.d(ecx_223.b) << 0x1c
                
                *(*(ebx_33 + 0x10) + (j_5 << 2)) = *(result[9] + (edx_79 << 2))
                j_2 = j_5 + 1
                j_5 = j_2
            while (j_2 s< *(ebx_33 + 0xc))
        
        char* eax_713 = *eax_1
        ecx_223.b = *eax_713
        int32_t edx_82 = zx.d(ecx_223.b) & 0x7f
        *eax_1 = &eax_713[1]
        
        if (ecx_223.b s< 0)
            ecx_223.b = eax_713[1]
            *eax_1 = &eax_713[2]
            edx_82 |= (zx.d(ecx_223.b) & 0x7f) << 7
            
            if (ecx_223.b s< 0)
                ecx_223.b = eax_713[2]
                *eax_1 = &eax_713[3]
                edx_82 |= (zx.d(ecx_223.b) & 0x7f) << 0xe
                
                if (ecx_223.b s< 0)
                    ecx_223.b = eax_713[3]
                    *eax_1 = &eax_713[4]
                    edx_82 |= (zx.d(ecx_223.b) & 0x7f) << 0x15
                    
                    if (ecx_223.b s< 0)
                        ecx_223.b = eax_713[4]
                        *eax_1 = &eax_713[5]
                        edx_82 |= zx.d(ecx_223.b) << 0x1c
        
        *(ebx_33 + 0x14) = *(result[0xb] + (edx_82 << 2))
        char* eax_735 = *eax_1
        ecx_223.b = *eax_735
        int32_t edx_84 = zx.d(ecx_223.b) & 0x7f
        *eax_1 = &eax_735[1]
        
        if (ecx_223.b s< 0)
            ecx_223.b = eax_735[1]
            *eax_1 = &eax_735[2]
            edx_84 |= (zx.d(ecx_223.b) & 0x7f) << 7
            
            if (ecx_223.b s< 0)
                ecx_223.b = eax_735[2]
                *eax_1 = &eax_735[3]
                edx_84 |= (zx.d(ecx_223.b) & 0x7f) << 0xe
                
                if (ecx_223.b s< 0)
                    ecx_223.b = eax_735[3]
                    *eax_1 = &eax_735[4]
                    edx_84 |= (zx.d(ecx_223.b) & 0x7f) << 0x15
                    
                    if (ecx_223.b s< 0)
                        ecx_223.b = eax_735[4]
                        *eax_1 = &eax_735[5]
                        edx_84 |= zx.d(ecx_223.b) << 0x1c
        
        *(ebx_33 + 0x18) = edx_84
        char* eax_755 = *eax_1
        ecx_223.b = *eax_755
        int32_t edx_86 = zx.d(ecx_223.b) & 0x7f
        *eax_1 = &eax_755[1]
        
        if (ecx_223.b s< 0)
            ecx_223.b = eax_755[1]
            *eax_1 = &eax_755[2]
            edx_86 |= (zx.d(ecx_223.b) & 0x7f) << 7
            
            if (ecx_223.b s< 0)
                ecx_223.b = eax_755[2]
                *eax_1 = &eax_755[3]
                edx_86 |= (zx.d(ecx_223.b) & 0x7f) << 0xe
                
                if (ecx_223.b s< 0)
                    ecx_223.b = eax_755[3]
                    *eax_1 = &eax_755[4]
                    edx_86 |= (zx.d(ecx_223.b) & 0x7f) << 0x15
                    
                    if (ecx_223.b s< 0)
                        ecx_223.b = eax_755[4]
                        *eax_1 = &eax_755[5]
                        edx_86 |= zx.d(ecx_223.b) << 0x1c
        
        *(ebx_33 + 0x1c) = edx_86
        char* eax_775 = *eax_1
        ecx_223.b = *eax_775
        int32_t edx_88 = zx.d(ecx_223.b) & 0x7f
        *eax_1 = &eax_775[1]
        
        if (ecx_223.b s< 0)
            ecx_223.b = eax_775[1]
            *eax_1 = &eax_775[2]
            edx_88 |= (zx.d(ecx_223.b) & 0x7f) << 7
            
            if (ecx_223.b s< 0)
                ecx_223.b = eax_775[2]
                *eax_1 = &eax_775[3]
                edx_88 |= (zx.d(ecx_223.b) & 0x7f) << 0xe
                
                if (ecx_223.b s< 0)
                    ecx_223.b = eax_775[3]
                    *eax_1 = &eax_775[4]
                    edx_88 |= (zx.d(ecx_223.b) & 0x7f) << 0x15
                    
                    if (ecx_223.b s< 0)
                        ecx_223.b = eax_775[4]
                        *eax_1 = &eax_775[5]
                        edx_88 |= zx.d(ecx_223.b) << 0x1c
        
        *(ebx_33 + 0x20) = edx_88
        char* eax_795 = *eax_1
        ecx_223.b = *eax_795
        *eax_1 = &eax_795[1]
        edx_88:1.b = eax_795[1]
        *eax_1 = &eax_795[2]
        edx_88.b = eax_795[2]
        *eax_1 = &eax_795[3]
        ebx_33.b = eax_795[3]
        *eax_1 = &eax_795[4]
        *(arg4 + 0x24) =
            ((zx.d(ecx_223.b) << 8 | zx.d(edx_88:1.b)) << 8 | zx.d(edx_88.b)) << 8 | zx.d(ebx_33.b)
        char* eax_804 = *eax_1
        uint32_t ecx_230
        ecx_230.b = *eax_804
        *eax_1 = &eax_804[1]
        edx_88:1.b = eax_804[1]
        *eax_1 = &eax_804[2]
        edx_88.b = eax_804[2]
        *eax_1 = &eax_804[3]
        ebx_33.b = eax_804[3]
        *eax_1 = &eax_804[4]
        float xmm0_51 =
            ((zx.d(ecx_230.b) << 8 | zx.d(edx_88:1.b)) << 8 | zx.d(edx_88.b)) << 8 | zx.d(ebx_33.b)
        bool cond:15_1 = *(arg4 + 0x18) != 0
        *(arg4 + 0x28) = xmm0_51
        
        if (not(cond:15_1))
            *(arg4 + 0x28) = xmm0_51 f* *arg3
        
        char* eax_813 = *eax_1
        uint32_t ecx_237
        ecx_237.b = *eax_813
        *eax_1 = &eax_813[1]
        edx_88:1.b = eax_813[1]
        *eax_1 = &eax_813[2]
        edx_88.b = eax_813[2]
        *eax_1 = &eax_813[3]
        ebx_33.b = eax_813[3]
        *eax_1 = &eax_813[4]
        float xmm0_53 =
            ((zx.d(ecx_237.b) << 8 | zx.d(edx_88:1.b)) << 8 | zx.d(edx_88.b)) << 8 | zx.d(ebx_33.b)
        float* ecx_245 = *(arg4 + 0x1c)
        *(arg4 + 0x2c) = xmm0_53
        
        if (ecx_245 == 0 || ecx_245 == 1)
            *(arg4 + 0x2c) = xmm0_53 * *arg3
        
        char* eax_822 = *eax_1
        ecx_245.b = *eax_822
        *eax_1 = &eax_822[1]
        edx_88:1.b = eax_822[1]
        *eax_1 = &eax_822[2]
        edx_88.b = eax_822[2]
        *eax_1 = &eax_822[3]
        ebx_33.b = eax_822[3]
        *eax_1 = &eax_822[4]
        *(arg4 + 0x30) =
            ((zx.d(ecx_245.b) << 8 | zx.d(edx_88:1.b)) << 8 | zx.d(edx_88.b)) << 8 | zx.d(ebx_33.b)
        char* eax_831 = *eax_1
        uint32_t ecx_252
        ecx_252.b = *eax_831
        *eax_1 = &eax_831[1]
        edx_88:1.b = eax_831[1]
        *eax_1 = &eax_831[2]
        edx_88.b = eax_831[2]
        *eax_1 = &eax_831[3]
        ebx_33.b = eax_831[3]
        *eax_1 = &eax_831[4]
        *(arg4 + 0x34) =
            ((zx.d(ecx_252.b) << 8 | zx.d(edx_88:1.b)) << 8 | zx.d(edx_88.b)) << 8 | zx.d(ebx_33.b)
        eax_638 = result[0x18]
        *(eax_638 + (i_15 << 2)) = arg4
        i_4 = i_15 + 1
        i_15 = i_4
    while (i_4 s< result[0x17])

float* ebx_35 = arg3
result[0xe] = sub_70d2c0(eax_638, eax_1, ebx_35, 0xffffffff, result, edx_2)
char* eax_840 = *eax_1
char ecx_262 = *eax_840
uint32_t eax_842 = zx.d(ecx_262) & 0x7f
*eax_1 = &eax_840[1]

if (ecx_262 s< 0)
    ecx_262 = eax_840[1]
    *eax_1 = &eax_840[2]
    arg4 = eax_842 | (zx.d(ecx_262) & 0x7f) << 7
    
    if (ecx_262 s< 0)
        ecx_262 = eax_840[2]
        *eax_1 = &eax_840[3]
        arg4 |= (zx.d(ecx_262) & 0x7f) << 0xe
        
        if (ecx_262 s< 0)
            ecx_262 = eax_840[3]
            *eax_1 = &eax_840[4]
            arg4 |= (zx.d(ecx_262) & 0x7f) << 0x15
            
            if (ecx_262 s< 0)
                ecx_262 = eax_840[4]
                *eax_1 = &eax_840[5]
                arg4 |= zx.d(ecx_262) << 0x1c
    
    eax_842 = arg4

bool cond:7 = result[0xe] == 0
result[0xc] = eax_842

if (not(cond:7))
    eax_842 += 1
    result[0xc] = eax_842

int32_t ecx_263 = data_147ded8
uint32_t _Size_1 = eax_842 << 2
int32_t* eax_855

if (ecx_263 == 0)
    eax_855 = malloc(_Size_1)
else
    eax_855 = ecx_263(_Size_1, 
        "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x431)

int32_t ecx_265 = result[0xe]
result[0xd] = eax_855

if (ecx_265 != 0)
    *eax_855 = ecx_265

uint32_t eax_856
eax_856.b = result[0xe] != 0
arg4 = eax_856

if (eax_856 s< result[0xc])
    uint32_t i_5
    
    do
        eax_856 = sub_70d2c0(eax_856, eax_1, ebx_35, 0, result, edx_2)
        *(result[0xd] + (arg4 << 2)) = eax_856
        i_5 = arg4 + 1
        arg4 = i_5
    while (i_5 s< result[0xc])

arg4 = 0

if (ebx_35[4] s> 0)
    ecx_265 = 0
    int32_t var_20_1 = 0
    uint32_t i_6
    
    do
        int32_t* ebx_37 = ebx_35[6] i+ ecx_265
        char* edx_96 = ebx_37[1]
        int32_t* eax_857
        
        if (edx_96 != 0)
            eax_857 = sub_7100d0(result, edx_96)
        else
            eax_857 = result[0xe]
        
        if (eax_857 == 0)
            free(eax_1)
            sub_7087d0(sub_70fd80(result), "Skin not found: ", arg3, ebx_37[1])
            return 0
        
        void* eax_858 = sub_752840(eax_857, ebx_37[2], eax_857, *ebx_37)
        
        if (eax_858 == 0)
            free(eax_1)
            sub_7087d0(sub_70fd80(result), "Parent mesh not found: ", arg3, *ebx_37)
            return 0
        
        void* ecx_268 = eax_858
        
        if (ebx_37[4] == 0)
            ecx_268 = ebx_37[3]
        
        *(ebx_37[3] + 0x28) = ecx_268
        void* ecx_269 = ebx_37[3]
        *(ecx_269 + 0x8c) = eax_858
        *(ecx_269 + 0x18) = *(eax_858 + 0x18)
        *(ecx_269 + 0x14) = *(eax_858 + 0x14)
        *(ecx_269 + 0x20) = *(eax_858 + 0x20)
        *(ecx_269 + 0x1c) = *(eax_858 + 0x1c)
        *(ecx_269 + 0x68) = *(eax_858 + 0x68)
        *(ecx_269 + 0x74) = *(eax_858 + 0x74)
        *(ecx_269 + 0x70) = *(eax_858 + 0x70)
        *(ecx_269 + 0x88) = *(eax_858 + 0x88)
        *(ecx_269 + 0x24) = *(eax_858 + 0x24)
        *(ecx_269 + 0x94) = *(eax_858 + 0x94)
        *(ecx_269 + 0x90) = *(eax_858 + 0x90)
        *(ecx_269 + 0x98) = *(eax_858 + 0x98)
        *(ecx_269 + 0x9c) = *(eax_858 + 0x9c)
        sub_753020(ebx_37[3])
        void* ecx_271 = arg3[1]
        int32_t eax_875 = *(*(ecx_271 + 8) + 4)
        
        if (eax_875 != 0)
            eax_875(ecx_271, ebx_37[3])
        
        ebx_35 = arg3
        i_6 = arg4 + 1
        ecx_265 = var_20_1 + 0x14
        arg4 = i_6
        var_20_1 = ecx_265
    while (i_6 s< ebx_35[4])

char* eax_877 = *eax_1
ecx_265.b = *eax_877
int32_t ebx_39 = zx.d(ecx_265.b) & 0x7f
*eax_1 = &eax_877[1]

if (ecx_265.b s< 0)
    ecx_265.b = eax_877[1]
    *eax_1 = &eax_877[2]
    ebx_39 |= (zx.d(ecx_265.b) & 0x7f) << 7
    
    if (ecx_265.b s< 0)
        ecx_265.b = eax_877[2]
        *eax_1 = &eax_877[3]
        ebx_39 |= (zx.d(ecx_265.b) & 0x7f) << 0xe
        
        if (ecx_265.b s< 0)
            ecx_265.b = eax_877[3]
            *eax_1 = &eax_877[4]
            ebx_39 |= (zx.d(ecx_265.b) & 0x7f) << 0x15
            
            if (ecx_265.b s< 0)
                ecx_265.b = eax_877[4]
                *eax_1 = &eax_877[5]
                ebx_39 |= zx.d(ecx_265.b) << 0x1c

int32_t eax_890 = data_147ded8
result[0xf] = ebx_39
int32_t _Size_10 = ebx_39 << 2
int32_t eax_891
int32_t i_7

if (eax_890 == 0)
    eax_891, i_7 = malloc(_Size_10)
else
    eax_891, i_7 = eax_890(_Size_10, 
        "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x455)

bool cond:11 = result[0xf] s<= 0
result[0x10] = eax_891
int32_t i_10 = 0

if (not(cond:11))
    do
        char* eax_896 = sub_708970(eax_1, result)
        int32_t eax_897 = data_147ded8
        uint32_t eax_898
        uint32_t ebx_40
        
        if (eax_897 == 0)
            eax_898 = malloc(0x1c)
            arg4 = eax_898
            ebx_40 = eax_898
        else
            ebx_40 =
                eax_897(0x1c, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\EventData.c", 0x22)
            arg4 = ebx_40
        
        if (ebx_40 != 0)
            __builtin_memset(ebx_40, 0, 0x1c)
        
        char* ecx_278 = eax_896
        void* edx_104 = &ecx_278[1]
        
        do
            eax_898.b = *ecx_278
            ecx_278 = &ecx_278[1]
        while (eax_898.b != 0)
        
        int32_t eax_899 = data_147ded8
        char* eax_900
        
        if (eax_899 == 0)
            eax_900 = malloc(ecx_278 - edx_104 + 1)
        else
            eax_900 = eax_899(ecx_278 - edx_104 + 1, 
                "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\EventData.c", 0x23)
        
        char* ecx_281 = eax_900
        *ebx_40 = ecx_281
        void* esi_4 = eax_896 - ecx_281
        
        do
            eax_900.b = *(ecx_281 + esi_4)
            ecx_281 = &ecx_281[1]
            ecx_281[0xffffffff] = eax_900.b
        while (eax_900.b != 0)
        
        char* eax_901 = *eax_1
        result = result_1
        ecx_281.b = *eax_901
        int32_t edx_106 = zx.d(ecx_281.b) & 0x7f
        *eax_1 = &eax_901[1]
        
        if (ecx_281.b s< 0)
            ecx_281.b = eax_901[1]
            *eax_1 = &eax_901[2]
            edx_106 |= (zx.d(ecx_281.b) & 0x7f) << 7
            
            if (ecx_281.b s< 0)
                ecx_281.b = eax_901[2]
                *eax_1 = &eax_901[3]
                edx_106 |= (zx.d(ecx_281.b) & 0x7f) << 0xe
                
                if (ecx_281.b s< 0)
                    ecx_281.b = eax_901[3]
                    *eax_1 = &eax_901[4]
                    edx_106 |= (zx.d(ecx_281.b) & 0x7f) << 0x15
                    
                    if (ecx_281.b s< 0)
                        ecx_281.b = eax_901[4]
                        *eax_1 = &eax_901[5]
                        edx_106 |= zx.d(ecx_281.b) << 0x1c
        
        *(ebx_40 + 4) = edx_106 u>> 1 ^ neg.d(edx_106 & 1)
        char* eax_924 = *eax_1
        ecx_281.b = *eax_924
        *eax_1 = &eax_924[1]
        int32_t edx_108
        edx_108:1.b = eax_924[1]
        *eax_1 = &eax_924[2]
        edx_108.b = eax_924[2]
        *eax_1 = &eax_924[3]
        ebx_40.b = eax_924[3]
        *eax_1 = &eax_924[4]
        uint32_t ebx_41 = arg4
        *(ebx_41 + 8) = ((zx.d(ecx_281.b) << 8 | zx.d(edx_108:1.b)) << 8 | zx.d(edx_108.b)) << 8
            | zx.d(ebx_40.b)
        *(ebx_41 + 0xc) = sub_7088b0(eax_1)
        int32_t eax_933
        int16_t edx_109
        eax_933, edx_109 = sub_7088b0(eax_1)
        *(ebx_41 + 0x10) = eax_933
        
        if (eax_933 != 0)
            char* eax_934 = *eax_1
            char ecx_291 = *eax_934
            *eax_1 = &eax_934[1]
            edx_109:1.b = eax_934[1]
            *eax_1 = &eax_934[2]
            edx_109.b = eax_934[2]
            *eax_1 = &eax_934[3]
            ebx_41.b = eax_934[3]
            *eax_1 = &eax_934[4]
            *(arg4 + 0x14) = ((zx.d(ecx_291) << 8 | zx.d(edx_109:1.b)) << 8 | zx.d(edx_109.b)) << 8
                | zx.d(ebx_41.b)
            char* eax_943 = *eax_1
            uint32_t ecx_298
            ecx_298.b = *eax_943
            *eax_1 = &eax_943[1]
            edx_109:1.b = eax_943[1]
            *eax_1 = &eax_943[2]
            edx_109.b = eax_943[2]
            *eax_1 = &eax_943[3]
            ebx_41.b = eax_943[3]
            *eax_1 = &eax_943[4]
            uint32_t eax_950 = zx.d(ebx_41.b)
            ebx_41 = arg4
            *(ebx_41 + 0x18) =
                ((zx.d(ecx_298.b) << 8 | zx.d(edx_109:1.b)) << 8 | zx.d(edx_109.b)) << 8 | eax_950
        
        *(result[0x10] + (i_10 << 2)) = ebx_41
        i_7 = i_10 + 1
        i_10 = i_7
    while (i_7 s< result[0xf])

char* eax_952 = *eax_1
i_7.b = *eax_952
int32_t ebx_43 = zx.d(i_7.b) & 0x7f
*eax_1 = &eax_952[1]

if (i_7.b s< 0)
    i_7.b = eax_952[1]
    *eax_1 = &eax_952[2]
    ebx_43 |= (zx.d(i_7.b) & 0x7f) << 7
    
    if (i_7.b s< 0)
        i_7.b = eax_952[2]
        *eax_1 = &eax_952[3]
        ebx_43 |= (zx.d(i_7.b) & 0x7f) << 0xe
        
        if (i_7.b s< 0)
            i_7.b = eax_952[3]
            *eax_1 = &eax_952[4]
            ebx_43 |= (zx.d(i_7.b) & 0x7f) << 0x15
            
            if (i_7.b s< 0)
                i_7.b = eax_952[4]
                *eax_1 = &eax_952[5]
                ebx_43 |= zx.d(i_7.b) << 0x1c

int32_t eax_965 = data_147ded8
result[0x11] = ebx_43
int32_t _Size_11 = ebx_43 << 2
int32_t eax_966

if (eax_965 == 0)
    eax_966 = malloc(_Size_11)
else
    eax_966 = eax_965(_Size_11, 
        "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x466)

bool cond:14 = result[0x11] s<= 0
result[0x12] = eax_966
arg4 = 0

if (not(cond:14))
    uint32_t i_8
    
    do
        char* eax_967 = sub_7088b0(eax_1)
        int128_t* eax_968 = sub_708c70(eax_967, eax_967, arg3, eax_1, result_1)
        free(eax_967)
        
        if (eax_968 == 0)
            free(eax_1)
            sub_70fd80(result_1)
            return 0
        
        result = result_1
        *(result[0x12] + (arg4 << 2)) = eax_968
        i_8 = arg4 + 1
        arg4 = i_8
    while (i_8 s< result[0x11])

free(eax_1)
return result
