// 函数: sub_6aef40
// 地址: 0x6aef40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76fc15
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* arg_8
int32_t* eax_4 = sub_6b2ec0(arg1 + 0x38, arg_8)
int32_t* ebx = eax_4
char const* const var_38
int32_t var_34
char const* const var_30_1
char* ecx_1

if (*ebx == 2)
    int32_t* esi_1 = arg2
    
    if (esi_1 == 0)
        sub_69fd50(eax_4, "!Null\Null", &arg_8, 3)
        int32_t* var_8_1 = esi_1
        char* eax_5 = arg_8
        char* const ecx_3 = &data_801800
        
        if (eax_5 != 0)
            ecx_3 = eax_5
        
        eax_4 = sub_69f030(ecx_3, esi_1 + 3)
        esi_1 = eax_4
        int32_t var_8_2 = 1
        
        if (data_cf65bc != 0)
            eax_4 = arg_8
            
            if (eax_4 != 0 && *eax_4 != 0)
                eax_4 = sub_63d4e0(&arg_8)
                int32_t temp1_1 = eax_4[1]
                eax_4[1] -= 1
                
                if (temp1_1 == 1)
                    eax_4 = sub_64c080(eax_4, eax_4[3] + 0x10)
                    arg_8 = &data_801800
        
        int32_t var_8_3 = 0xffffffff
        goto label_6af01c
    
    if (esi_1[1] == 3)
    label_6af01c:
        int32_t**** edi = esi_1
        arg2 = esi_1
        
        if (*edi == 0)
            sub_69f4a0(eax_4, 0, edi, 1)
        
        int32_t*** eax_6 = *edi
        edi[7] += 1
        char ecx_7 = arg3.b
        int32_t var_8_4 = 2
        int32_t* edx_5 = **eax_6
        arg_8 = edx_5
        uint32_t eax_9 = *edx_5 u>> ecx_7
        
        if (eax_9 u< 1)
            eax_9 = 1
        
        uint32_t edi_2 = edx_5[1] u>> ecx_7
        
        if (edi_2 u< 1)
            edi_2 = 1
        
        int32_t eax_10 = sub_6a9570(eax_9, edx_5[6])
        int32_t eax_11 = eax_10 * edi_2
        int32_t ecx_10 = arg_8[7]
        void* edi_3
        int32_t var_34_1
        char const* const ecx_11
        
        if (ecx_10 != 0)
            if (ecx_10 != 1)
                ecx_11 = "Halt"
                char const* const var_30_7 = "Dx11GraphicsInterface::UnlockTextureBuffer"
                
                var_34_1 = ecx_10 != 2 ? 0x2f6 : 0x2f2
                
                goto label_6af18c
            
            edi_3 = arg1
            int32_t* edx_8 = *(edi_3 + 8)
            (*(*edx_8 + 0xc0))(edx_8, ebx[7], arg_8[4] * arg4 + arg3, 0, ebx[2], eax_10, eax_11)
        else
            if (arg4 != ecx_10)
                char const* const var_30_2 = "Dx11GraphicsInterface::UnlockTextureBuffer"
                var_34_1 = 0x2e6
                ecx_11 = "depth == 0"
            label_6af18c:
                sub_63b870(eax_11, &data_801800, ecx_11, 
                    "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp", var_34_1, 
                    "Dx11GraphicsInterface::UnlockTextureBuffer")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            edi_3 = arg1
            int32_t* ecx_12 = *(edi_3 + 8)
            (*(*ecx_12 + 0xc0))(ecx_12, ebx[7], arg3, 0, ebx[2], eax_10, eax_11)
        
        if (*(ebx + 6) != 0)
            int32_t* eax_17 = *(edi_3 + 8)
            (*(*eax_17 + 0xd8))(eax_17, ebx[8])
        
        int32_t result = ebx[2]
        
        if (result != 0)
            result = _aligned_free(result)
        
        ebx[2] = 0
        
        if (esi_1 != 0)
            esi_1[7] -= 1
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    var_30_1 = "DefAutoLock::DefAutoLock"
    var_34 = 0x19
    var_38 = "C:\x\ax2017\Engine\DefLoad.h"
    ecx_1 = "assetPtr && assetPtr->assetType == assetType"
else
    var_30_1 = "Dx11GraphicsInterface::UnlockTextureBuffer"
    var_34 = 0x2d8
    var_38 = "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp"
    ecx_1 = "bufferData->mBufferType == DX11BUFFER_TEXTURE"

sub_63b870(eax_4, &data_801800, ecx_1, var_38, var_34, var_30_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
