// 函数: sub_4eb890
// 地址: 0x4eb890
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* edx = arg4
void* eax_3 = *(arg3 + 0xbc) - 2
void* var_468 = edx
char var_45c = 0
char var_45d
int32_t ebx

switch (eax_3)
    case nullptr
        ebx = 0
        var_45d = 0x5a
        
        if (*(edx + 0x10) s> 0)
            eax_3.w = 0x2c
            int32_t* esi_3 = nullptr
            int32_t* var_464_2 = nullptr
            int32_t edx_8
            
            do
                int32_t ecx_12 = *(esi_3 + *(edx + 0xc))
                char const* const edx_5
                
                if (ecx_12 != 0)
                    eax_3, ecx_12 = strchr((*(*(sub_571b30(ecx_12, 0x18) + 0x74) + 4))(0x5f))
                    edx_5 = eax_3 + 1
                    eax_3.w = 0x2c
                else
                    edx_5 = "(none)"
                
                char const* const esi_4 = edx_5
                
                do
                    ecx_12.b = *edx_5
                    edx_5 = &edx_5[1]
                while (ecx_12.b != 0)
                
                void* edx_6 = edx_5 - esi_4
                char* edi_4 = &var_45d
                
                do
                    ecx_12.b = edi_4[1]
                    edi_4 = &edi_4[1]
                while (ecx_12.b != 0)
                
                int32_t esi_5
                int32_t edi_5
                edi_5, esi_5 = __builtin_memcpy(edi_4, esi_4, edx_6 u>> 2 << 2)
                __builtin_memcpy(edi_5, esi_5, edx_6 & 3)
                edx_8 = *(var_468 + 0x10)
                
                if (ebx s< edx_8 - 1)
                    int16_t* edi_6 = &var_45d
                    int32_t ecx_18
                    
                    do
                        ecx_18.b = *(edi_6 + 1)
                        edi_6 += 1
                    while (ecx_18.b != 0)
                    *edi_6 = eax_3.w
                
                ebx += 1
                esi_3 = &var_464_2[3]
                edx = var_468
                var_464_2 = esi_3
            while (ebx s< edx_8)
        
        ebx.b = var_45d
    case 1
        int32_t* eax_13 = *(edx + 0xc)
        ebx.b = 0x52
        int32_t ecx_9 = *eax_13
        int32_t esi_2 = eax_13[2]
        char const* const eax_14
        
        if (ecx_9 != 0)
            eax_14 = strchr((*(*(sub_571b30(ecx_9, 0x18) + 0x74) + 4))(0x5f)) + 1
        else
            eax_14 = "(none)"
        
        int32_t var_480_5 = esi_2
        char const* const var_484_4 = eax_14
        sub_4f7fb0(&var_45c, 0x3e8, "%s->%d")
    case 2
        ebx = 0
        var_45d = 0x4f
        
        if (*(edx + 0x10) s> 0)
            int32_t* ecx_1 = nullptr
            int32_t* var_464_1 = nullptr
            int32_t edx_4
            
            do
                int32_t var_480_1 = *(ecx_1 + *(edx + 0xc))
                char var_74[0x6c]
                sub_4f7fb0(&var_74, 0x64, "%d")
                char (* edx_1)[0x6c] = &var_74
                char i
                
                do
                    i = *edx_1
                    edx_1 = &(*edx_1)[1]
                while (i != 0)
                
                int32_t edx_2 = edx_1 - &var_74
                char* edi_1 = &var_45d
                
                do
                    i = edi_1[1]
                    edi_1 = &edi_1[1]
                while (i != 0)
                
                int32_t esi_1
                int32_t edi_2
                edi_2, esi_1 = __builtin_memcpy(edi_1, &var_74, edx_2 u>> 2 << 2)
                __builtin_memcpy(edi_2, esi_1, edx_2 & 3)
                edx_4 = *(var_468 + 0x10)
                
                if (ebx s< edx_4 - 1)
                    char* edi_3 = &var_45d
                    int32_t eax_5
                    
                    do
                        eax_5.b = edi_3[1]
                        edi_3 = &edi_3[1]
                    while (eax_5.b != 0)
                    *edi_3 = 0x2c
                
                ebx += 1
                ecx_1 = &var_464_1[3]
                edx = var_468
                var_464_1 = ecx_1
            while (ebx s< edx_4)
        
        ebx.b = var_45d
    case 3
        ebx.b = 0x4e
    label_4eb98b:
        int32_t var_480_2 = **(edx + 0xc)
        sub_4f7fb0(&var_45c, 0x3e8, "%d")
    case 4
        ebx.b = 0x55
        
        if (*(edx + 0x10) == 0)
        label_4ebb7a:
            var_45c.d = 0x6e6f6e28
            int16_t var_458_1 = 0x2965
            char var_456_1 = 0
        else
            int32_t ecx_7 = **(edx + 0xc)
            void* const var_484_1
            
            if (ecx_7 != 0)
                int32_t var_480_4 = strchr((*(*(sub_571b30(ecx_7, 0x18) + 0x74) + 4))(0x5f)) + 1
                var_484_1 = &data_808058
            else
                char const* const var_480_3 = "(none)"
                var_484_1 = &data_808058
            
            sub_4f7fb0(&var_45c, 0x3e8, var_484_1)
    case 7
        ebx.b = 0x43
        goto label_4eb98b
    default
        switch (*(arg3 + 0xc0) - 1)
            case 0
                ebx.b = 0x41
            case 1
                ebx.b = 0x54
            case 2
                ebx.b = 0x42
            case 4
                ebx.b = 0x44
            case 6
                ebx.b = 0x48
            case 8
                ebx.b = 0x50
            case 0xa
                ebx.b = 0x59
            case 0xb
                ebx.b = 0x47
            case 0x11
                ebx.b = 0x53
            case 0x17
                ebx.b = 0x57
            case 0x32
                ebx.b = 0x45
            default
                ebx.b = 0x58
        
        void* eax_25 = *(edx + 0x10)
        var_45d = ebx.b
        
        if (eax_25 == 0)
            goto label_4ebb7a
        
        ebx = 0
        
        if (eax_25 s> 0)
            eax_25.w = 0x2c
            int32_t* esi_7 = nullptr
            int32_t* var_464_3 = nullptr
            int32_t edx_12
            
            do
                int32_t ecx_20 = *(esi_7 + *(edx + 0xc))
                char const* const edx_9
                
                if (ecx_20 != 0)
                    eax_25, ecx_20 = strchr((*(*(sub_571b30(ecx_20, 0x18) + 0x74) + 4))(0x5f))
                    edx_9 = eax_25 + 1
                    eax_25.w = 0x2c
                else
                    edx_9 = "(none)"
                
                char const* const esi_8 = edx_9
                
                do
                    ecx_20.b = *edx_9
                    edx_9 = &edx_9[1]
                while (ecx_20.b != 0)
                
                void* edx_10 = edx_9 - esi_8
                char* edi_7 = &var_45d
                
                do
                    ecx_20.b = edi_7[1]
                    edi_7 = &edi_7[1]
                while (ecx_20.b != 0)
                
                int32_t esi_9
                int32_t edi_8
                edi_8, esi_9 = __builtin_memcpy(edi_7, esi_8, edx_10 u>> 2 << 2)
                __builtin_memcpy(edi_8, esi_9, edx_10 & 3)
                edx_12 = *(var_468 + 0x10)
                
                if (ebx s< edx_12 - 1)
                    int16_t* edi_9 = &var_45d
                    int32_t ecx_26
                    
                    do
                        ecx_26.b = *(edi_9 + 1)
                        edi_9 += 1
                    while (ecx_26.b != 0)
                    *edi_9 = eax_25.w
                
                ebx += 1
                esi_7 = &var_464_3[3]
                edx = var_468
                var_464_3 = esi_7
            while (ebx s< edx_12)
        
        ebx.b = var_45d

char* var_480_6 = &var_45c
uint32_t var_484_7 = zx.d(ebx.b)
int32_t result = sub_4f7fb0(arg2, 0x400, "%c:%s")
CookieCheckFunction(result)
return result
