// 函数: sub_6cafa0
// 地址: 0x6cafa0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_770a91
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
float var_24 = _mm_cvtepi32_ps(zx.o(*(data_cf65b8 + 0x18)))
float xmm1

if (sub_646520() == 0)
    xmm1 = var_24
else
    xmm1 = 250f
    var_24 = 250f

int32_t var_60 = 0
int32_t frequency_1 = 0x43240000
float var_3c = 2f
float var_5c = xmm1 - 83.3333359f
int128_t var_88 = var_60.o
sub_682f00(&var_88, &var_3c)
int32_t i = 0
void* edi = data_147d19c
int32_t i_1 = 0
int32_t result

do
    int32_t eax_8
    int32_t edx_1
    edx_1:eax_8 = sx.q(*(edi + 0xb9b680) + 1 + i)
    result = divs.dp.d(edx_1:eax_8, 0x28)
    int32_t edx_2 = mods.dp.d(edx_1:eax_8, 0x28)
    void* esi_2 = edx_2 * 0x4a490 + edi
    
    if (*(esi_2 + 0x4a48c) != 0)
        result = *(esi_2 + 0x3a980)
        
        if (result != 0)
            float xmm3_4 = _mm_cvtepi32_ps(zx.o(i)) * 4f + 2f
            float var_2c_1 = xmm3_4
            
            if (result != 0x2710)
                int32_t ecx_2 = *(edi + 0xbbaa9c)
                void invalid
                float xmm0_6
                
                if (ecx_2 == 0xffffffff)
                    int32_t eax_14 = result * 3
                    int32_t eax_15 = *(esi_2 + (eax_14 << 3) - 0x14)
                    int32_t eax_16 = *esi_2
                    int32_t eax_17 = *(esi_2 + 4)
                    void* ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
                    var_3c = *(esi_2 + (eax_14 << 3) - 0x18)
                    
                    if (data_1a98f58 s> *(*ThreadLocalStoragePointer + 8))
                        sub_75970e(&data_1a98f58)
                        
                        if (data_1a98f58 == 0xffffffff)
                            QueryPerformanceFrequency(&frequency_1)
                            data_1a98f5c = 1f / __ultof3(frequency_1, xmm1, invalid, eax_2)
                            __Init_thread_footer(&data_1a98f58)
                        
                        edi = data_147d19c
                    
                    float ecx_7 = var_3c
                    xmm3_4 = var_2c_1
                    xmm0_6 = __ultof3(ecx_7 i- eax_16, sbb.d(eax_15, eax_17, ecx_7 u< eax_16), 
                        invalid, eax_2) * 1000f f* data_1a98f5c * 5f
                else
                    int32_t ecx_3 = *(edi + 0xbbaa90)
                    int32_t eax_13 = *(edi + (ecx_2 << 2) + 0xbb6c04) * 2
                    
                    if (ecx_3 == 2)
                        xmm0_6 = _mm_cvtepi32_ps(zx.o(*(esi_2 + (eax_13 << 3) + 0x3aa94)))
                    else if (ecx_3 != 0)
                        xmm0_6 = *(esi_2 + (eax_13 << 3) + 0x3aa8c) * 5f
                    else
                        xmm0_6 = *(esi_2 + (eax_13 << 3) + 0x3aa90) * 5f
                
                bool cond:1_1 = *(edi + 0xbbaa98) != 0x28
                float var_30_2 = 0f
                var_3c = _mm_min_ss(0x4326aaab, xmm0_6)
                int128_t var_98
                void* const var_4c
                
                if (not(cond:1_1) && *(edi + 0xbbaa9c) == 0xffffffff)
                    int32_t j_1 = 0
                    
                    if (*(esi_2 + 0x3aa88) - 1 s> 0)
                        void* edi_1 = esi_2 + 0x3a990
                        void* const edx_6 = *fsbase->ThreadLocalStoragePointer
                        var_4c = edx_6
                        float var_70_1 = xmm3_4 + 3f
                        int32_t j
                        
                        do
                            int32_t eax_22 = *(edi_1 + 8)
                            int32_t ecx_9 = *(edi_1 + 0xc)
                            int32_t eax_23 = *esi_2
                            int32_t eax_24 = *(esi_2 + 4)
                            
                            if (data_1a98f58 s> *(edx_6 + 8))
                                sub_75970e(&data_1a98f58)
                                
                                if (data_1a98f58 == 0xffffffff)
                                    int32_t frequency
                                    QueryPerformanceFrequency(&frequency)
                                    uint32_t var_64
                                    data_1a98f5c = 1f / __ultof3(frequency, var_64, invalid, eax_2)
                                    __Init_thread_footer(&data_1a98f58)
                            
                            float xmm0_17 = __ultof3(eax_22 - eax_23, 
                                sbb.d(ecx_9, eax_24, eax_22 u< eax_23), invalid, eax_2) * 1000f
                            float xmm1_5 = _mm_min_ss(var_3c, xmm0_17 f* data_1a98f5c * 5f)
                            float var_74_1 = var_24 - xmm1_5
                            float var_6c_1 = var_24 - var_30_2
                            var_98 = xmm3_4.o
                            sub_682f00(&var_98, edi_1)
                            edi_1 += 0x10
                            j = j_1 + 1
                            edx_6 = var_4c
                            var_30_2 = xmm1_5
                            j_1 = j
                        while (j s< *(esi_2 + 0x3aa88) - 1)
                        edi = data_147d19c
                
                void* const eax_30 = 0xc0ffffff
                var_88.d = var_2c_1
                var_88:4.d = var_24 - var_3c
                
                if (*(edi + 0xbbaa98) == i_1)
                    eax_30 = 0xc05c5cff
                
                var_4c = eax_30
                var_88:8.d = var_2c_1 + 3f
                var_88:0xc.d = var_24 - var_30_2
                var_98 = var_88
                result = sub_682f00(&var_98, &var_4c)
            else
                void* ecx_1 = *fsbase->ThreadLocalStoragePointer
                int32_t eax_10 = data_1a9a2d8
                
                if (eax_10 s> *(ecx_1 + 8))
                    eax_10, ecx_1, edx_2 = sub_75970e(&data_1a9a2d8)
                    
                    if (data_1a9a2d8 == 0xffffffff)
                        int32_t var_14_1 = 0
                        data_1a9a2dc = sub_69f030("sys/DebugFont.font", 0x12)
                        int32_t var_14_2 = 0xffffffff
                        eax_10, ecx_1, edx_2 = __Init_thread_footer(&data_1a9a2d8)
                
                void* var_a8_1 = ecx_1
                result = sub_6b3f10(eax_10, edx_2, "Overflow", data_1a9a2dc, 0xffffffff, 7, 1f)
            
            i = i_1
            edi = data_147d19c
    
    i += 1
    i_1 = i
while (i s< 0x28)

fsbase->NtTib.ExceptionList = ExceptionList
return result
