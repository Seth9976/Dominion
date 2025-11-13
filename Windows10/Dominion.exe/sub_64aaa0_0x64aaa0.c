// 函数: sub_64aaa0
// 地址: 0x64aaa0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76c73d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_68 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result = arg1
uint32_t result_1 = result
int32_t var_70_1
char const* const var_6c
char* ecx

if (result != 0)
    void* esi_1 = *fsbase->ThreadLocalStoragePointer
    
    if (data_1a98f80 s> *(esi_1 + 8))
        sub_75970e(&data_1a98f80)
        
        if (data_1a98f80 == 0xffffffff)
            int32_t var_8_1 = 0
            data_1a98f84 = sub_69f030("sys/skybox.material", 5)
            int32_t var_8_2 = 0xffffffff
            __Init_thread_footer(&data_1a98f80)
    
    int32_t edx_1 = data_1a98f84
    int32_t var_38_1 = edx_1
    
    if (data_1a98f88 s> *(esi_1 + 8))
        sub_75970e(&data_1a98f88)
        
        if (data_1a98f88 == 0xffffffff)
            int32_t var_8_3 = 1
            data_1a98f8c = sub_69f030("sys/skybox.structure", 2)
            int32_t var_8_4 = 0xffffffff
            __Init_thread_footer(&data_1a98f88)
        
        edx_1 = var_38_1
    
    int32_t* eax_8 = data_1a98f8c
    int32_t edi_1 = 0
    int128_t* esi_2 = &data_cf6614
    
    while (true)
        result = data_cf65b8
        
        if (*(result + 0x28) != 0 || edi_1 == 2)
            if (data_147aba1 == 0)
                break
            
            int32_t var_34 = 0x41200000
            data_cf6b38 = 1 << edi_1.b
            int32_t eax_10 = *(esi_2 + 0x18)
            int128_t var_5c_1 = *esi_2
            int32_t var_18_1 = eax_10
            int64_t var_20_1 = esi_2[1].q
            int128_t var_30_1 = data_800248
            result = sub_648920(eax_10, &var_34, eax_8, edx_1, result_1, 0)
        
        edx_1 = var_38_1
        esi_2 += 0x1c
        edi_1 += 1
        
        if (esi_2 s> &data_cf664c)
            if (data_147aba1 == 0)
                break
            
            data_cf6b38 = 7
            fsbase->NtTib.ExceptionList = ExceptionList
            CookieCheckFunction(result)
            return result
    
    var_6c = "Draw3DSetDrawEyeMask"
    ecx = "gDraw3DData.submittingRenderItems"
    var_70_1 = 0x324
else
    var_6c = "Draw3DSkyBox"
    var_70_1 = 0xbe1
    ecx = "texture"

sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Engine\Draw3d.cpp", var_70_1, var_6c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
