// 函数: sub_7374d0
// 地址: 0x7374d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_772d10
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t* ecx
int32_t** edx
ecx, edx = __chkstk(0x8090)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8088 = 0
int32_t var_8084 = 0
int32_t var_8080 = 0
int32_t var_14_1 = 0
int32_t eax_4 = ecx[1]
int32_t* eax_5 = sub_64c020(eax_4 << 4)
int32_t esi_1 = ecx[1]
int32_t* edi = eax_5
int32_t* var_8088_1 = edi
int32_t var_806c = 0
int32_t var_8084_1 = 0
int32_t* eax_7
int32_t edx_1
eax_7, edx_1 = sub_64c020(esi_1 * 0x18)
*edx = eax_7
int32_t eax_8 = 0
edx[2] = esi_1
int32_t esi_2 = 0
edx[1] = 0
int32_t var_805c = 0
int32_t var_8070 = 0
void* const ecx_7 = ecx[1]

if (ecx_7 s> 0)
    int32_t var_8078_1 = 0
    
    while (true)
        char const* const var_38_3
        int32_t var_34_3
        char const* const var_30_3
        char* ecx_20
        
        if (eax_8 s>= ecx_7)
        label_737ad0:
            var_30_3 = "XArray<struct PackAsset>::operator []"
            var_34_3 = 0xb5
            ecx_20 = "index >= 0 && index < mSize"
            var_38_3 = "C:\x\ax2017\Engine\xArray.h"
        else
            int32_t* edx_2 = *ecx
            int32_t* eax_9 = *(edx_2 + esi_2)
            eax_8 = eax_9[1]
            int16_t ecx_13
            int16_t esi_3
            
            if (eax_8 == 3)
                eax_8 = var_806c
                
                if (eax_8 s< eax_4)
                    var_806c = eax_8 + 1
                    var_8070 = eax_8 + 1
                    var_8084_1 = eax_8 + 1
                    float eax_18
                    float edx_6
                    eax_18, edx_6 = sub_5a0e40()
                    int32_t edi_4 = int.d(sub_4d5cb0(eax_18 + 0.5f))
                    char* const ecx_17 = &data_801800
                    int32_t esi_4 = int.d(sub_4d5cb0(edx_6 + 0.5f))
                    char* eax_20 = eax_9[8]
                    
                    if (eax_20 != 0)
                        ecx_17 = eax_20
                    
                    int32_t var_30_2 = esi_4
                    int32_t var_34_2 = edi_4
                    char* const var_38_2 = ecx_17
                    sub_63b5f0("texture %s size %d %d scale")
                    float xmm1_4 = 1f / arg2
                    float xmm0_20 = _mm_cvtepi32_ps(zx.o(edi_4))
                    float xmm2_5 = _mm_cvtepi32_ps(zx.o(esi_4)) * xmm1_4
                    esi_3 = (int.d(sub_4d5cb0(xmm0_20 * xmm1_4 + 0.5f))).w
                    edx_1 = (eax_8 + 1) << 4
                    ecx_13 = (int.d(sub_4d5cb0(xmm2_5 + 0.5f))).w + arg3.w * 2
                    goto label_737810
                
            label_737862:
                var_30_3 = "XArray<struct stbrp_rect>::Alloc"
                var_34_3 = 0xa1
                ecx_20 = "mSize < mSizeReserved"
                var_38_3 = "C:\x\ax2017\Engine\xArray.h"
            else
                if (eax_8 == 0x12)
                    eax_8 = var_806c
                    
                    if (eax_8 s>= eax_4)
                        goto label_737862
                    
                    var_806c = eax_8 + 1
                    var_8084_1 = eax_8 + 1
                    int32_t eax_11 = (eax_8 + 1) << 4
                    var_8070 = eax_8 + 1
                    void var_80b0
                    uint128_t xmm1_1 = *sub_737010(&var_80b0, *(edx_2 + esi_2 + 4), eax_9, 
                        &var_80b0, *(edx_2 + esi_2 + 8), arg4, arg5)
                    eax_8 = var_805c
                    
                    if (eax_8 s>= ecx[1])
                        goto label_737ad0
                    
                    int32_t eax_14 = *ecx
                    int32_t xmm0_2 = _mm_bsrli_si128(xmm1_1, 8)
                    *(eax_14 + esi_2 + 0xc) = xmm1_1
                    int32_t xmm1_2 = _mm_bsrli_si128(xmm1_1, 4)
                    float xmm1_3 = 1f / arg2
                    int32_t ecx_11 = _mm_bsrli_si128(xmm1_1, 0xc) - xmm1_2
                    float xmm0_6 = _mm_cvtepi32_ps(zx.o(xmm0_2 - xmm1_1))
                    float xmm2_2 = _mm_cvtepi32_ps(zx.o(ecx_11)) * xmm1_3
                    esi_3 = (int.d(sub_4d5cb0(xmm0_6 * xmm1_3 + 0.5f))).w
                    edx_1 = eax_11
                    ecx_13 = (int.d(sub_4d5cb0(xmm2_2 + 0.5f))).w + arg3.w * 2
                label_737810:
                    edi = var_8088_1
                    *(edx_1 + edi - 0xa) = ecx_13
                    *(edx_1 + edi - 0xc) = esi_3 + (arg3 << 1).w
                    *(edx_1 + edi - 0x10) = var_805c
                    eax_8 = var_805c + 1
                    ecx_7 = ecx[1]
                    esi_2 = var_8078_1 + 0x1c
                    var_805c = eax_8
                    var_8078_1 = esi_2
                    
                    if (eax_8 s>= ecx_7)
                        esi_2 = var_8070
                        break
                    
                    if (esi_2 s>= 0)
                        continue
                    
                    goto label_737ad0
                
                var_30_3 = "AtlasMakerCalcRects"
                var_34_3 = 0x489
                var_38_3 = "C:\x\ax2017\Engine\Editor\AtlasMaker.cpp"
                ecx_20 = "Halt"
        
        sub_63b870(eax_8, &data_801800, ecx_20, var_38_3, var_34_3, var_30_3)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

uint32_t result_1 = 0
uint32_t result
int32_t i

do
    void* const var_30_4 = ecx_7
    void var_8028
    void* var_34_4 = &var_8028
    void var_8058
    sub_734d50(&var_8028, edx_1, &var_8058, ecx_7)
    i, ecx_7 = sub_7351d0(0xffff, edi, &var_8058, esi_2)
    edx_1 = 0
    int32_t eax_27 = 0
    int32_t var_805c_1 = 0
    int32_t var_8060_4 = 0
    
    if (esi_2 s> 0)
        ecx_7 = nullptr
        int128_t* esi_7 = nullptr
        void* const var_8074_1 = nullptr
        int128_t* var_8068_1 = nullptr
        
        do
            int32_t var_34_5
            char const* const var_30_6
            char* ecx_33
            
            if (esi_7 s< 0 || eax_27 s>= var_806c)
            label_737aa0:
                var_30_6 = "XArray<struct stbrp_rect>::operator []"
                ecx_33 = "index >= 0 && index < mSize"
                var_34_5 = 0xb5
            label_737ab9:
                sub_63b870(eax_27, &data_801800, ecx_33, "C:\x\ax2017\Engine\xArray.h", var_34_5, 
                    var_30_6)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            if (*(esi_7 + var_8088_1 + 0xc) == 0)
                if (ecx_7 s< 0 || var_805c_1 s>= var_806c)
                    goto label_737aa0
                
                *(ecx_7 + var_8088_1) = *(esi_7 + var_8088_1)
                edx_1 = var_805c_1 + 1
                ecx_7 += 0x10
                var_805c_1 = edx_1
                var_8074_1 = ecx_7
            else
                eax_27 = edx[1]
                
                if (eax_27 s>= edx[2])
                    var_30_6 = "XArray<struct PackLoc>::Alloc"
                    var_34_5 = 0xa1
                    ecx_33 = "mSize < mSizeReserved"
                    goto label_737ab9
                
                edx[1] = eax_27 + 1
                int32_t* edi_7 = *edx
                int32_t ecx_23 = (eax_27 + 1) * 3
                edi_7[ecx_23 * 2 - 6] = *(esi_7 + var_8088_1)
                uint32_t eax_30 = zx.d(*(esi_7 + var_8088_1 + 8))
                uint32_t edx_9 = zx.d(*(esi_7 + var_8088_1 + 0xa))
                int32_t esi_10 = zx.d(*(esi_7 + var_8088_1 + 4)) - arg3 + eax_30
                int32_t ecx_28 = zx.d(*(var_8068_1 + var_8088_1 + 6)) - arg3 + edx_9
                edi_7[ecx_23 * 2 - 5] = eax_30 + arg3
                edi_7[ecx_23 * 2 - 4] = arg3 + edx_9
                edi_7[ecx_23 * 2 - 3] = esi_10
                esi_7 = var_8068_1
                edi_7[ecx_23 * 2 - 2] = ecx_28
                ecx_7 = var_8074_1
                edi_7[ecx_23 * 2 - 1] = result_1
                edx_1 = var_805c_1
                var_806c = var_8084_1
                eax_27 = var_8060_4
            
            eax_27 += 1
            esi_7 = &esi_7[1]
            var_8060_4 = eax_27
            var_8068_1 = esi_7
        while (eax_27 s< var_8070)
        
        edi = var_8088_1
    
    esi_2 = edx_1
    result = result_1 + 1
    var_8070 = esi_2
    result_1 = result
while (i == 0)
int32_t var_14_2 = 1

if (data_cf65bc != 0 && edi != 0)
    sub_64c080(edi, eax_4 << 4)
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
