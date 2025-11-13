// 函数: sub_707dc0
// 地址: 0x707dc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void var_64
int32_t var_c = __security_cookie ^ &var_64
char* esi = arg3
char* var_5c = esi
void* ebx = &esi[arg2]
char* edx = arg4
void* var_4c = ebx
int32_t eax_1

do
    eax_1.b = *edx
    edx = &edx[1]
while (eax_1.b != 0)

void* count_1 = edx - &edx[1]
void* var_40_1

if (count_1 s<= 0)
    var_40_1 = nullptr
else
    eax_1.b = *(arg4 + count_1 - 1)
    
    if (eax_1.b == 0x2f)
        var_40_1 = nullptr
    else
        var_40_1 = 1
        
        if (eax_1.b == 0x5c)
            var_40_1 = nullptr

int32_t eax_2 = data_147ded8
int32_t* edi_1 = nullptr
int32_t* var_3c = nullptr
int32_t* var_38 = nullptr
int32_t** result
int32_t* result_2

if (eax_2 == 0)
    int32_t** result_1 = malloc(0xc)
    result = result_1
    result_2 = result_1
else
    result_2 = eax_2(0xc, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Atlas.c", 0xb4)
    result = result_2

if (result_2 != 0)
    *result_2 = 0
    result_2[1] = 0

int32_t (* const var_44)(char const* _Str1, char const* _Str2, uint32_t _MaxCount) = strncmp
result_2[2] = 0
int32_t (* const var_60)(char const* _String, char** _EndPtr, int32_t _Radix) = strtol

while (true)
    if (esi == ebx)
        CookieCheckFunction(result)
        return result
    
    char* _String = esi
    
    while (*esi != 0xa)
        esi = &esi[1]
        var_5c = esi
        
        if (esi == ebx)
            break
    
    char* _EndPtr = esi
    sub_707be0(&_String)
    
    if (esi != ebx)
        esi = &esi[1]
        var_5c = esi
    
    char* _EndPtr_5 = _EndPtr
    void* count = _EndPtr_5 - _String
    
    if (_EndPtr_5 == _String)
        edi_1 = nullptr
    else
        int32_t _String_1
        int32_t _EndPtr_1
        int32_t _String_2
        int32_t _EndPtr_2
        
        if (edi_1 != 0)
            int32_t eax_39 = data_147ded8
            int32_t* eax_40
            
            if (eax_39 == 0)
                eax_40 = malloc(0x54)
            else
                eax_40 =
                    eax_39(0x54, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Atlas.c", 0x32)
            
            if (eax_40 != 0)
                memset(eax_40, 0, 0x54)
            
            if (var_38 == 0)
                result[1] = eax_40
            else
                var_38[0x14] = eax_40
            
            int32_t ecx_17 = data_147ded8
            eax_40[0x13] = edi_1
            uint32_t count_2 = _EndPtr - _String
            var_38 = eax_40
            int32_t eax_44
            
            if (ecx_17 == 0)
                eax_44 = malloc(count_2 + 1)
            else
                eax_44 = ecx_17(count_2 + 1, 
                    "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Atlas.c", 0x87)
            
            memcpy(eax_44, _String, count_2)
            *(eax_44 + count_2) = 0
            *eax_40 = eax_44
            
            if (sub_707c50(&_String, var_4c, &var_5c, &_String) == 0)
                break
            
            char* _Str2_5 = _String
            int32_t eax_51
            
            if (var_44("true", _Str2_5, _EndPtr - _Str2_5) != 0)
                char* _Str2_6 = _String
                eax_51 = var_44("false", _Str2_6, _EndPtr - _Str2_6)
                
                if (eax_51 != 0)
                    eax_51 = var_60(_String, &_EndPtr, 0xa)
            else
                eax_51 = 0x5a
            
            ebx = var_4c
            eax_40[0xf] = eax_51
            int32_t ecx_19
            ecx_19.b = eax_51 == 0x5a
            eax_40[0xe] = ecx_19
            
            if (sub_707cd0(&_String_1, ebx, &var_5c, &_String_1) != 2)
                break
            
            eax_40[1] = var_60(_String_1, &_EndPtr_1, 0xa)
            eax_40[2] = var_60(_String_2, &_EndPtr_2, 0xa)
            
            if (sub_707cd0(&_String_1, ebx, &var_5c, &_String_1) != 2)
                break
            
            eax_40[3] = var_60(_String_1, &_EndPtr_1, 0xa)
            int32_t eax_61 = var_60(_String_2, &_EndPtr_2, 0xa)
            int32_t edx_15 = eax_40[1]
            eax_40[4] = eax_61
            bool cond:2_1 = eax_40[0xe] == 0
            float xmm0_2 = _mm_cvtepi32_ps(zx.o(edi_1[8]))
            eax_40[5] = _mm_cvtepi32_ps(zx.o(edx_15)) / xmm0_2
            uint128_t xmm1_4 = zx.o(eax_40[2])
            float xmm0_4 = _mm_cvtepi32_ps(zx.o(edi_1[9]))
            eax_40[6] = _mm_cvtepi32_ps(xmm1_4) / xmm0_4
            float xmm0_6 = _mm_cvtepi32_ps(zx.o(edi_1[8]))
            int32_t eax_64
            uint128_t xmm1_7
            
            if (cond:2_1)
                xmm1_7 = zx.o(eax_40[3] + edx_15)
                eax_64 = eax_40[2] + eax_61
            else
                xmm1_7 = zx.o(edx_15 + eax_61)
                eax_64 = eax_40[3] + eax_40[2]
            
            eax_40[7] = _mm_cvtepi32_ps(xmm1_7) / xmm0_6
            float xmm0_8 = _mm_cvtepi32_ps(zx.o(edi_1[9]))
            eax_40[8] = _mm_cvtepi32_ps(zx.o(eax_64)) / xmm0_8
            int32_t eax_69 = sub_707cd0(&_String_1, ebx, &var_5c, &_String_1)
            
            if (eax_69 == 0)
                break
            
            if (eax_69 == 4)
                int32_t eax_70 = data_147ded8
                int32_t eax_71
                
                if (eax_70 == 0)
                    eax_71 = malloc(0x10)
                else
                    eax_71 = eax_70(0x10, 
                        "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Atlas.c", 0x113)
                
                eax_40[0x11] = eax_71
                *eax_40[0x11] = var_60(_String_1, &_EndPtr_1, 0xa)
                *(eax_40[0x11] + 4) = var_60(_String_2, &_EndPtr_2, 0xa)
                int32_t _String_3
                void _EndPtr_3
                *(eax_40[0x11] + 8) = var_60(_String_3, &_EndPtr_3, 0xa)
                int32_t _String_4
                void _EndPtr_4
                *(eax_40[0x11] + 0xc) = var_60(_String_4, &_EndPtr_4, 0xa)
                int32_t eax_77 = sub_707cd0(&_String_1, ebx, &var_5c, &_String_1)
                
                if (eax_77 == 0)
                    break
                
                if (eax_77 == 4)
                    int32_t eax_78 = data_147ded8
                    int32_t eax_79
                    
                    if (eax_78 == 0)
                        eax_79 = malloc(0x10)
                    else
                        eax_79 = eax_78(0x10, 
                            "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Atlas.c", 0x11c)
                    
                    eax_40[0x12] = eax_79
                    *eax_40[0x12] = var_60(_String_1, &_EndPtr_1, 0xa)
                    *(eax_40[0x12] + 4) = var_60(_String_2, &_EndPtr_2, 0xa)
                    *(eax_40[0x12] + 8) = var_60(_String_3, &_EndPtr_3, 0xa)
                    *(eax_40[0x12] + 0xc) = var_60(_String_4, &_EndPtr_4, 0xa)
                    
                    if (sub_707cd0(&_String_1, ebx, &var_5c, &_String_1) == 0)
                        break
            
            eax_40[0xb] = var_60(_String_1, &_EndPtr_1, 0xa)
            eax_40[0xc] = var_60(_String_2, &_EndPtr_2, 0xa)
            sub_707cd0(&_String_1, ebx, &var_5c, &_String_1)
            eax_40[9] = var_60(_String_1, &_EndPtr_1, 0xa)
            eax_40[0xa] = var_60(_String_2, &_EndPtr_2, 0xa)
            
            if (sub_707c50(&_String, ebx, &var_5c, &_String) == 0)
                break
            
            eax_40[0xd] = var_60(_String, &_EndPtr, 0xa)
            esi = var_5c
        else
            int32_t ecx_2 = data_147ded8
            char* eax_5
            
            if (ecx_2 == 0)
                eax_5 = malloc(count + 1)
            else
                eax_5 = ecx_2(count + 1, 
                    "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Atlas.c", 0x87)
            
            memcpy(eax_5, _String, count)
            char* ecx_3 = eax_5
            *(eax_5 + count) = 0
            char i
            
            do
                i = *ecx_3
                ecx_3 = &ecx_3[1]
            while (i != 0)
            int32_t ecx_5 = data_147ded8
            uint32_t _Size = var_40_1 + 1 + ecx_3 - &ecx_3[1] + count_1
            char* var_50_2
            char* esi_2
            
            if (ecx_5 == 0)
                char* eax_10 = malloc(_Size)
                var_50_2 = eax_10
                esi_2 = eax_10
            else
                esi_2 =
                    ecx_5(_Size, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Atlas.c", 0xbc)
                var_50_2 = esi_2
            
            memcpy(esi_2, arg4, count_1)
            
            if (var_40_1 != 0)
                *(esi_2 + count_1) = 0x2f
            
            char* ecx_6 = eax_5
            void* eax_11
            
            do
                eax_11.b = *ecx_6
                ecx_6 = &ecx_6[1]
                ecx_6[esi_2 - eax_5 + var_40_1 + count_1 - 1] = eax_11.b
            while (eax_11.b != 0)
            int32_t eax_12 = data_147ded8
            int32_t* eax_13
            
            if (eax_12 == 0)
                eax_13 = malloc(0x2c)
            else
                eax_13 =
                    eax_12(0x2c, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Atlas.c", 0x23)
            
            edi_1 = eax_13
            
            if (edi_1 != 0)
                __builtin_memset(&edi_1[1], 0, 0x28)
            
            char* ecx_7 = eax_5
            *edi_1 = result
            void* edx_6 = &ecx_7[1]
            int32_t** eax_14
            
            do
                eax_14.b = *ecx_7
                ecx_7 = &ecx_7[1]
            while (eax_14.b != 0)
            int32_t eax_15 = data_147ded8
            char* esi_3 = eax_5
            int32_t eax_16
            
            if (eax_15 == 0)
                eax_16 = malloc(ecx_7 - edx_6 + 1)
            else
                eax_16 = eax_15(ecx_7 - edx_6 + 1, 
                    "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Atlas.c", 0x25)
            
            edi_1[1] = eax_16
            void* ecx_11 = eax_16 - eax_5
            
            do
                eax_16.b = *esi_3
                esi_3 = &esi_3[1]
                *(esi_3 + ecx_11 - 1) = eax_16.b
            while (eax_16.b != 0)
            
            free(eax_5)
            
            if (var_3c == 0)
                *result = edi_1
            else
                var_3c[0xa] = edi_1
            
            var_3c = edi_1
            int32_t eax_20 = sub_707cd0(&_String_1, var_4c, &var_5c, &_String_1)
            
            if (eax_20 == 0)
                break
            
            if (eax_20 == 2)
                edi_1[8] = var_60(_String_1, &_EndPtr_1, 0xa)
                edi_1[9] = var_60(_String_2, &_EndPtr_2, 0xa)
                
                if (sub_707cd0(&_String_1, var_4c, &var_5c, &_String_1) == 0)
                    break
            
            int32_t esi_5 = 7
            int32_t _Str2 = _String_1
            int32_t _MaxCount_1 = _EndPtr_1 - _Str2
            
            while (var_44((&data_cb3c6c)[esi_5], _Str2, _MaxCount_1) != 0)
                int32_t temp4_1 = esi_5
                esi_5 -= 1
                
                if (temp4_1 - 1 s< 0)
                    esi_5 = 0
                    break
                
                _Str2 = _String_1
            
            edi_1[2] = esi_5
            
            if (sub_707cd0(&_String_1, var_4c, &var_5c, &_String_1) == 0)
                break
            
            int32_t esi_6 = 7
            int32_t _Str2_1 = _String_1
            int32_t _MaxCount_2 = _EndPtr_1 - _Str2_1
            
            while (var_44((&data_cb3c8c)[esi_6], _Str2_1, _MaxCount_2) != 0)
                int32_t temp5_1 = esi_6
                esi_6 -= 1
                
                if (temp5_1 - 1 s< 0)
                    esi_6 = 0
                    break
                
                _Str2_1 = _String_1
            
            edi_1[3] = esi_6
            int32_t esi_7 = 7
            int32_t _Str2_2 = _String_2
            int32_t _MaxCount_3 = _EndPtr_2 - _Str2_2
            
            while (var_44((&data_cb3c8c)[esi_7], _Str2_2, _MaxCount_3) != 0)
                int32_t temp6_1 = esi_7
                esi_7 -= 1
                
                if (temp6_1 - 1 s< 0)
                    esi_7 = 0
                    break
                
                _Str2_2 = _String_2
            
            edi_1[4] = esi_7
            
            if (sub_707c50(&_String, var_4c, &var_5c, &_String) == 0)
                break
            
            edi_1[5] = 1
            edi_1[6] = 1
            char* _Str2_3 = _String
            
            if (var_44("none", _Str2_3, _EndPtr - _Str2_3) != 0)
                char* _Str2_4 = _String
                void* _MaxCount = _EndPtr - _Str2_4
                
                if (_MaxCount != 1)
                    if (var_44("xy", _Str2_4, _MaxCount) == 0)
                        edi_1[6] = 2
                        edi_1[5] = 2
                else
                    _MaxCount.b = *_Str2_4
                    
                    if (_MaxCount.b == 0x78)
                        edi_1[5] = 2
                    else if (_MaxCount.b == 0x79)
                        edi_1[6] = 2
            
            sub_6a73c0(edi_1, var_50_2)
            free(var_50_2)
            esi = var_5c
            ebx = var_4c

sub_7086b0(result)
CookieCheckFunction(0)
return 0
