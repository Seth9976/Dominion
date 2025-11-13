// 函数: sub_6e8290
// 地址: 0x6e8290
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_771709
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_64 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg2
int32_t* var_14 = ebx
ebx[0x14] = *(arg1 + 0xc)
ebx[0x13] = *(arg1 + 8)
ebx[0x15] = *(arg1 + 0x10)
ebx[0x16] = *(arg1 + 0x14)
int32_t eax_5
eax_5.b = *(arg1 + 0x44)
ebx[0x17].b = eax_5.b
eax_5.b = *(arg1 + 0x45)
*(ebx + 0x5d) = eax_5.b
int32_t eax_6 = *(arg1 + 0x20)
ebx[2] = eax_6
int32_t count = eax_6 * 0x18
int32_t edi

if (count != 0)
    edi = sub_687730(count)
    memset(edi, 0, count)
else
    edi = 0

*ebx = edi
int32_t i_6 = 0
char* const var_18

if (ebx[2] s> 0)
    int32_t ecx_1 = 0
    int32_t edx = 0
    int32_t var_1c_1 = 0
    int32_t var_20_1 = 0
    int32_t i
    
    do
        int32_t* ebx_2 = *ebx + edx
        var_18 = &data_801800
        int32_t* edi_2 = *(arg1 + 0x18) + ecx_1
        int32_t var_8_1 = 0
        uint8_t* eax_9 = *edi_2
        char* var_30_1 = eax_9
        char* eax_10
        va_list ecx_2
        int32_t edx_1
        eax_10, ecx_2, edx_1 = strrchr(eax_9, 0x5f)
        float var_28
        int32_t eax_12
        
        if (eax_10 != 0)
            int32_t* var_68_2 = &var_28
            eax_12 = sub_64b6d0(&var_28, edx_1, ecx_2, eax_10, "_fps%f")
        
        if (eax_10 == 0 || eax_12 != 1)
            var_28 = 0f
            sub_63d8d0(&var_18, var_30_1)
        else
            sub_63db30(&var_18, var_30_1, eax_10 - var_30_1)
        
        float xmm0_1 = var_28
        xmm0_1 f- 0
        char** eax_14
        eax_14:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
            | (xmm0_1 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (not(p_2))
            var_28 = *(arg1 + 0x10)
        
        char* const esi_4 = var_18
        ebx_2[3] = edi_2[3]
        ebx_2[2] = edi_2[2]
        ebx_2[4] = var_28
        char* const var_30_2
        char* const eax_19
        
        if (esi_4 != 0)
            eax_19 = esi_4
            var_30_2 = eax_19
            
            if (eax_19 == 0)
                sub_63b870(eax_19, &data_801800, "pExistingString", 
                    "C:\x\ax2017\Engine\Definition.cpp", 0x25b, "DefDeepCopyString")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
        else
            eax_19 = &data_801800
            var_30_2 = &data_801800
        
        char* const edi_3 = eax_19
        void* ecx_5 = &edi_3[1]
        
        do
            eax_19.b = *edi_3
            edi_3 = &edi_3[1]
        while (eax_19.b != 0)
        
        int32_t eax_20 = sub_687730(edi_3 - ecx_5 + 1)
        *ebx_2 = eax_20
        memcpy(eax_20, var_30_2, edi_3 - ecx_5 + 1)
        int32_t var_8_2 = 1
        
        if (data_cf65bc != 0 && esi_4 != 0 && *esi_4 != 0)
            char* eax_21 = sub_63d4e0(&var_18)
            int32_t temp1_1 = *(eax_21 + 4)
            *(eax_21 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)
                var_18 = &data_801800
        
        ebx = var_14
        i = i_6 + 1
        edx = var_20_1 + 0x18
        ecx_1 = var_1c_1 + 0x10
        int32_t var_8_3 = 0xffffffff
        i_6 = i
        var_20_1 = edx
        var_1c_1 = ecx_1
    while (i s< ebx[2])

int32_t esi_5 = 0
int32_t ecx_10 = *(arg1 + 0x2c)
ebx[4] = *(arg1 + 0x28)
ebx[5] = ecx_10
ebx[6] = *(arg1 + 0x30)
int32_t eax_25 = 0
*(arg1 + 0x28) = 0
int32_t i_8 = *(arg1 + 0x40)
*(arg1 + 0x30) = 0

if (i_8 s> 0)
    void* ecx_12 = *(arg1 + 0x38) + 0x20
    int32_t i_1
    
    do
        int32_t edx_6 = *(ecx_12 - 0x10)
        
        if (edx_6 != 0)
            eax_25 += edx_6
            esi_5 += *ecx_12
        else
            eax_25 += 1
            esi_5 += 1
        
        ecx_12 += 0x28
        i_1 = i_8
        i_8 -= 1
    while (i_1 != 1)

ebx[0xa] = eax_25
int32_t count_2 = eax_25 * 0x18
int32_t ebx_3

if (count_2 != 0)
    ebx_3 = sub_687730(count_2)
    memset(ebx_3, 0, count_2)
else
    ebx_3 = 0

var_14[8] = ebx_3
int32_t* ebx_4 = var_14
ebx_4[0xe] = esi_5
int32_t count_1 = esi_5 << 7
int32_t edi_7

if (count_1 != 0)
    edi_7 = sub_687730(count_1)
    memset(edi_7, 0, count_1)
else
    edi_7 = 0

ebx_4[0xc] = edi_7
int32_t eax_29 = sub_687730(0x640)
memset(eax_29, 0, 0x640)
void* ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
ebx_4[0x10] = eax_29
ebx_4[0x12] = 0

if (data_1a9a338 s> *(*ThreadLocalStoragePointer + 8))
    sub_75970e(&data_1a9a338)
    
    if (data_1a9a338 == 0xffffffff)
        int32_t var_8_4 = 2
        data_1a9a33c = sub_69f030("sys/defaultflanim.texture", 3)
        int32_t var_8_5 = 0xffffffff
        __Init_thread_footer(&data_1a9a338)

void* result = arg1
char* const edx_7 = nullptr
int32_t edi_8 = 0
var_18 = nullptr
int32_t var_20_2 = 0
int32_t var_50 = 0

if (*(result + 0x40) s> 0)
    int32_t ecx_16 = 0
    int32_t var_30_3 = 0
    
    while (true)
        void* esi_7 = *(result + 0x38)
        void* i_2 = *(esi_7 + ecx_16 + 0x10)
        void** esi_8 = esi_7 + ecx_16
        void** var_2c = esi_8
        char const* const var_70_9
        int32_t var_6c_7
        char const* const var_68_13
        char* ecx_32
        
        if (i_2 != 0)
            int32_t var_38_1 = 0
            
            if (i_2 s> 0)
                void* var_3c_1 = nullptr
                i_2 = edi_8 * 0x18
                void* i_4 = i_2
                
                while (true)
                    if (edi_8 s>= ebx_4[0xa])
                        var_68_13 = "FlanimDefFromMayaDef"
                        var_6c_7 = 0x6ae
                        ecx_32 = "flanimLayerIndex < pFlanimDef->mLayerCount"
                        goto label_6e8a21_1
                    
                    void* ebx_6 = *esi_8
                    int32_t* edi_12 = ebx_4[8] + i_2
                    
                    if (ebx_6 == 0)
                        break
                    
                    void* esi_11 = ebx_6
                    void* ecx_19 = esi_11 + 1
                    
                    do
                        i_2.b = *esi_11
                        esi_11 += 1
                    while (i_2.b != 0)
                    
                    int32_t eax_34 = sub_687730(esi_11 - ecx_19 + 1)
                    *edi_12 = eax_34
                    memcpy(eax_34, ebx_6, esi_11 - ecx_19 + 1)
                    esi_8 = var_2c
                    void** ecx_21 = var_3c_1
                    char* const edx_8 = var_18
                    ebx_4 = var_14
                    edi_12[2] = *(ecx_21 + esi_8[2]) + edx_8
                    edi_12[3] = *(esi_8[2] + ecx_21 + 4) + edx_8
                    edi_12[4] = *(esi_8[2] + ecx_21 + 8) + edx_8
                    var_3c_1 = &ecx_21[4]
                    edi_12[5] = *(esi_8[2] + ecx_21 + 0xc) + edx_8
                    int32_t edx_10 = var_38_1 + 1
                    edi_8 = var_20_2 + 1
                    i_2 = i_4 + 0x18
                    var_20_2 = edi_8
                    i_4 = i_2
                    var_38_1 = edx_10
                    
                    if (edx_10 s>= esi_8[4])
                        edx_7 = var_18
                        goto label_6e86f2
                
                goto label_6e89c9
            
        label_6e86f2:
            int32_t eax_52 = esi_8[8]
            int32_t ecx_23 = 0
            int32_t var_44_1 = 0
            
            if (eax_52 s<= 0)
            label_6e8949:
                edx_7 = &edx_7[eax_52]
                result = arg1
                int32_t ecx_29 = var_50 + 1
                var_30_3 += 0x28
                ebx_4 = var_14
                var_18 = edx_7
                var_50 = ecx_29
                
                if (ecx_29 s>= *(result + 0x40))
                    break
                
                ecx_16 = var_30_3
                continue
            else
                int32_t ebx_7 = 0
                int32_t edx_11 = edx_7 << 7
                int32_t var_48_1 = 0
                int32_t var_4c_1 = edx_11
            label_6e8716:
                i_2 = &var_18[ecx_23]
                int32_t* ecx_24 = var_14
                int32_t* edi_15 = esi_8[6] + ebx_7
                
                if (i_2 s>= ecx_24[0xe])
                    var_68_13 = "FlanimDefFromMayaDef"
                    var_6c_7 = 0x6c0
                    ecx_32 = "flanimVertexIndex < pFlanimDef->mVertexCount"
                else
                    float xmm1_1 = 0f
                    int32_t* ebx_9 = ecx_24[0xc] + edx_11
                    int32_t xmm2_1 = 0
                    float xmm3_1 = 1f
                    int32_t xmm4_1 = 0x3f800000
                    int32_t edx_12 = 0xffffffff
                    int32_t var_38_2 = 0
                    void* i_5 = nullptr
                    
                    if (edi_15[2] s> 0)
                        int32_t ecx_25 = 0
                        float xmm5_1 = 0f
                        int32_t xmm6_1 = 0
                        int32_t var_3c_2 = 0
                        float xmm7_1 = 0f
                        int32_t* esi_14 = nullptr
                        
                        do
                            int32_t edi_16 = *edi_15
                            float xmm0_4 = *(esi_14 + edi_16)
                            xmm0_4 - 12345f
                            i_2:1.b = (xmm0_4 == 12345f ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_4, 12345f) ? 1 : 0) << 2
                                | (xmm0_4 < 12345f ? 1 : 0)
                            bool p_4 = unimplemented  {test ah, 0x44}
                            
                            if (not(p_4))
                                *(esi_14 + edi_16) = xmm1_1
                                *(esi_14 + edi_16 + 4) = xmm2_1
                            else
                                xmm2_1 = *(esi_14 + edi_16 + 4)
                                xmm1_1 = xmm0_4
                            
                            float xmm0_5 = *(esi_14 + edi_16 + 8)
                            xmm0_5 - 12345f
                            i_2:1.b = (xmm0_5 == 12345f ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_5, 12345f) ? 1 : 0) << 2
                                | (xmm0_5 < 12345f ? 1 : 0)
                            bool p_6 = unimplemented  {test ah, 0x44}
                            
                            if (not(p_6))
                                *(esi_14 + edi_16 + 8) = xmm5_1
                                *(esi_14 + edi_16 + 0xc) = xmm6_1
                            else
                                xmm6_1 = *(esi_14 + edi_16 + 0xc)
                                xmm5_1 = xmm0_5
                            
                            float xmm0_6 = *(esi_14 + edi_16 + 0x10)
                            xmm0_6 - 12345f
                            i_2:1.b = (xmm0_6 == 12345f ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_6, 12345f) ? 1 : 0) << 2
                                | (xmm0_6 < 12345f ? 1 : 0)
                            bool p_8 = unimplemented  {test ah, 0x44}
                            
                            if (not(p_8))
                                *(esi_14 + edi_16 + 0x10) = xmm3_1
                                *(esi_14 + edi_16 + 0x14) = xmm4_1
                            else
                                xmm4_1 = *(esi_14 + edi_16 + 0x14)
                                xmm3_1 = xmm0_6
                            
                            float xmm0_7 = *(esi_14 + edi_16 + 0x18)
                            xmm0_7 - 12345f
                            i_2:1.b = (xmm0_7 == 12345f ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_7, 12345f) ? 1 : 0) << 2
                                | (xmm0_7 < 12345f ? 1 : 0)
                            bool p_10 = unimplemented  {test ah, 0x44}
                            
                            if (not(p_10))
                                *(esi_14 + edi_16 + 0x18) = xmm7_1
                                *(esi_14 + edi_16 + 0x1c) = var_3c_2
                            else
                                xmm7_1 = xmm0_7
                                var_3c_2 = *(esi_14 + edi_16 + 0x1c)
                            
                            if (*(esi_14 + edi_16 + 0x20) != 0 || *(esi_14 + edi_16 + 0x21) != 0
                                    || *(esi_14 + edi_16 + 0x22) != 0
                                    || *(esi_14 + edi_16 + 0x23) != 0)
                                edx_12 = *(esi_14 + edi_16 + 0x20)
                            else
                                *(esi_14 + edi_16 + 0x20) = edx_12
                            
                            if (*(esi_14 + edi_16 + 0x24) != 0 || *(esi_14 + edi_16 + 0x25) != 0
                                    || *(esi_14 + edi_16 + 0x26) != 0
                                    || *(esi_14 + edi_16 + 0x27) != 0xff)
                                ecx_25 = *(esi_14 + edi_16 + 0x24)
                            else
                                *(esi_14 + edi_16 + 0x24) = ecx_25
                            
                            int32_t eax_49 = *(esi_14 + edi_16 + 0x28)
                            
                            if (eax_49 == data_1a9a33c)
                                *(esi_14 + edi_16 + 0x28) = var_38_2
                            else
                                var_38_2 = eax_49
                            
                            esi_14 = &esi_14[0xe]
                            i_2 = i_5 + 1
                            i_5 = i_2
                        while (i_2 s< edi_15[2])
                        
                        int32_t var_1c_2 = ecx_25
                        ecx_24 = var_14
                    
                    int32_t esi_15 = 0
                    
                    while (true)
                        if (esi_15 == 0 || esi_15 == 1 || esi_15 == 3 || esi_15 == 2)
                            i_2 = sub_6e7e80(i_2, ebx_9, edi_15, esi_15)
                        else
                            if (esi_15 != 4 && esi_15 != 5 && esi_15 != 6 && esi_15 != 7)
                                var_68_13 = "MayaDefCompressVertexList"
                                var_6c_7 = 0x63d
                                ecx_32 = "Halt"
                                break
                            
                            i_2 = sub_6e80e0(i_2, edi_15, ecx_24, ebx_9, esi_15)
                        
                        ecx_24 = var_14
                        esi_15 += 1
                        ebx_9 = &ebx_9[4]
                        
                        if (esi_15 s>= 8)
                            esi_8 = var_2c
                            ecx_23 = var_44_1 + 1
                            ebx_7 = var_48_1 + 0x10
                            eax_52 = esi_8[8]
                            edx_11 = var_4c_1 + 0x80
                            var_44_1 = ecx_23
                            var_48_1 = ebx_7
                            var_4c_1 = edx_11
                            
                            if (ecx_23 s< eax_52)
                                goto label_6e8716
                            
                            edx_7 = var_18
                            edi_8 = var_20_2
                            goto label_6e8949
            
        label_6e8a21:
            var_70_9 = "C:\x\ax2017\Engine\Flanim.cpp"
        else if (edi_8 s>= ebx_4[0xa])
            var_68_13 = "FlanimDefFromMayaDef"
            var_6c_7 = 0x69f
            ecx_32 = "flanimLayerIndex < pFlanimDef->mLayerCount"
        label_6e8a21_1:
            var_70_9 = "C:\x\ax2017\Engine\Flanim.cpp"
        else
            i_2 = *esi_8
            int32_t edi_9 = edi_8 * 3
            int32_t ebx_5 = ebx_4[8]
            void* i_3 = i_2
            
            if (i_2 != 0)
                void* i_7 = i_2
                void* ecx_17 = i_7 + 1
                
                do
                    i_2.b = *i_7
                    i_7 += 1
                while (i_2.b != 0)
                
                int32_t eax_32 = sub_687730(i_7 - ecx_17 + 1)
                *(ebx_5 + (edi_9 << 3)) = eax_32
                memcpy(eax_32, i_3, i_7 - ecx_17 + 1)
                edx_7 = var_18
                esi_8 = var_2c
                *(ebx_5 + (edi_9 << 3) + 8) = edx_7
                *(ebx_5 + (edi_9 << 3) + 0xc) = edx_7
                *(ebx_5 + (edi_9 << 3) + 0x10) = edx_7
                *(ebx_5 + (edi_9 << 3) + 0x14) = edx_7
                edi_8 = var_20_2 + 1
                var_20_2 = edi_8
                goto label_6e86f2
            
        label_6e89c9:
            var_68_13 = "DefDeepCopyString"
            var_6c_7 = 0x25b
            var_70_9 = "C:\x\ax2017\Engine\Definition.cpp"
            ecx_32 = "pExistingString"
        
        sub_63b870(i_2, &data_801800, ecx_32, var_70_9, var_6c_7, var_68_13)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

if (ebx_4[0x12] == 0)
    result = ebx_4[0x10]
    
    if (result != 0)
        result = _aligned_free(result)
    
    ebx_4[0x10] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
