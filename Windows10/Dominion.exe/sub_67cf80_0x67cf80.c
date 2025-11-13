// 函数: sub_67cf80
// 地址: 0x67cf80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebx_2
int32_t __saved_ebx_1 = __saved_ebx_2
int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76daa1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t esi
int32_t var_84 = esi
int32_t edi
int32_t var_88 = edi
int32_t __saved_ebp
int32_t var_8c = __security_cookie ^ &__saved_ebp
int32_t* esp_1 = &var_8c
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result

if (arg2 != 0)
    int32_t edx = int.d(fconvert.t(arg4[1]))
    int128_t* var_90 = nullptr
    int128_t* var_94 = 3
    int128_t* var_98 = 1
    int32_t result_1 = sub_6a1230(arg6, edx, int.d(fconvert.t(*arg4)), var_98, var_94, var_90)
    sub_649ab0()
    data_1a99f88 = sub_4acb60(&__saved_ebp, 0.261799395f)
    data_1a99f90 = 0x3dcccccd
    data_1a99f94 = 0x40400000
    data_1a99fb8 = 0
    data_1a99fbc = 0x40400000
    float xmm0_3 = arg4[1] / *arg4
    int128_t var_40
    var_90 = &var_40
    int32_t var_28_1 = 0xbf800000
    data_1a99f8c = xmm0_3
    data_1a99f98 = data_bf21e8
    data_1a99fa8 = data_bf21f8
    data_1a99fa8:0xc = 0x40400000
    float var_30 = -0f
    int32_t var_2c_1 = 0x80000000
    data_1a99f98:4.o = *sub_4ac9c0(&var_40, &data_7fef98, &var_30, var_90)
    uint32_t eax_7 = sub_646220(&data_1a99f88)
    char const* const ecx_2
    int128_t** esp_2
    
    if (data_147aba1 == 0)
        var_90 = "Draw3DOverlayColor"
        var_94 = 0x30c
        esp_2 = &var_94
        ecx_2 = "gDraw3DData.submittingRenderItems"
    label_67d2e2:
        *(esp_2 - 4) = "C:\x\ax2017\Engine\Draw3d.cpp"
        sub_63b870(eax_7, &data_801800, ecx_2)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t* ecx_3 = data_147b070
    data_cf6a80 = data_891360
    data_cf6a6c = 1
    data_cf65f8 = &data_ffffff
    int32_t eax_8 = *ecx_3
    var_90 = nullptr
    var_94 = &data_ffffff
    int32_t edx_1 = (*(eax_8 + 0x90))(var_94)
    void var_80
    var_94 = &var_80
    int128_t* eax_10 = sub_683290(&var_80, edx_1, arg4, var_94)
    int128_t var_50 = *eax_10
    var_40 = eax_10[1]
    sub_683220(&var_50)
    
    if (data_1a99fc0 s> *(*fsbase->ThreadLocalStoragePointer + 8))
        var_94 = &data_1a99fc0
        sub_75970e(var_94)
        
        if (data_1a99fc0 == 0xffffffff)
            int32_t var_14_1 = 0
            int32_t eax_13 = sub_69f030("sys/SpineTintRT.material", 5)
            var_94 = &data_1a99fc0
            data_1a99fc4 = eax_13
            int32_t var_14_2 = 0xffffffff
            __Init_thread_footer(var_94)
    
    void* ecx_8 = data_147b06c
    int32_t esi_2 = 0
    *(ecx_8 + 0x2dc) = data_1a99fc4
    
    if (arg2 s> 0)
        do
            sub_6651e0(*(arg3 + (esi_2 << 2)))
            esi_2 += 1
        while (esi_2 s< arg2)
        
        ecx_8 = data_147b06c
    
    eax_7 = arg5
    
    if (eax_7 != 0)
        var_94 = arg6
        eax_7 = eax_7(var_94)
        ecx_8 = data_147b06c
    
    *(ecx_8 + 0x2dc) = 0
    __builtin_memcpy(ecx_8 + 0x124, 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x"
    "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00"
    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00", 
        0x41)
    sub_649d30()
    
    if (data_147aba1 == 0)
        var_94 = "Draw3DRenderItemSubmissionEnd"
        var_98 = 0xae8
        esp_2 = &var_98
        ecx_2 = "gDraw3DData.submittingRenderItems"
        goto label_67d2e2
    
    if (data_147aba0 != 0)
        var_94 = "Draw3DRenderItemSubmissionEnd"
        var_98 = 0xae9
        esp_2 = &var_98
        ecx_2 = "!gDraw3DData.quadGroupDrawing"
        goto label_67d2e2
    
    void* ecx_9 = data_147b06c
    data_147aba1 = 0
    var_94 = nullptr
    *(ecx_9 + 0x2cc) += 1
    int32_t eax_17 = *(ecx_9 + 0x2cc) * 5
    *(ecx_9 + (eax_17 << 2) + 0x18c) = 2
    *(ecx_9 + (eax_17 << 2) + 0x194) = result_1
    *(ecx_9 + (eax_17 << 2) + 0x198) = 0
    *(ecx_9 + (eax_17 << 2) + 0x19c) = 0
    sub_6ad5d0(eax_17, 0, result_1, var_94.b)
    esp_1 = &var_90
    sub_645e30()
    sub_649120()
    sub_6494f0(2)
    sub_649c60()
    sub_6adb80()
    result = result_1
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
esp_1[1]
esp_1[2]
CookieCheckFunction(result)
return result
