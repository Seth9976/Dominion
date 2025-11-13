// 函数: sub_6aed40
// 地址: 0x6aed40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76fbd5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* arg_8
int32_t* eax_3 = sub_6b2ec0(arg1 + 0x38, arg_8)
int32_t* edi = eax_3
char const* const var_2c
int32_t var_28
char const* const var_24_1
char* ecx_1

if (*edi == 2)
    int32_t* esi_1 = arg2
    
    if (esi_1 == 0)
        sub_69fd50(eax_3, "!Null\Null", &arg_8, 3)
        int32_t* var_8_1 = esi_1
        char* eax_4 = arg_8
        char* const ecx_3 = &data_801800
        
        if (eax_4 != 0)
            ecx_3 = eax_4
        
        eax_3 = sub_69f030(ecx_3, esi_1 + 3)
        esi_1 = eax_3
        int32_t var_8_2 = 1
        
        if (data_cf65bc != 0)
            char* ecx_4 = arg_8
            
            if (ecx_4 != 0 && *ecx_4 != 0)
                eax_3 = sub_63d4e0(&arg_8)
                int32_t temp1_1 = eax_3[1]
                eax_3[1] -= 1
                
                if (temp1_1 == 1)
                    eax_3 = sub_64c080(eax_3, eax_3[3] + 0x10)
                    arg_8 = &data_801800
        
        int32_t var_8_3 = 0xffffffff
        goto label_6aee1a
    
    if (esi_1[1] == 3)
    label_6aee1a:
        
        if (*esi_1 == 0)
            sub_69f4a0(eax_3, 0, esi_1, 1)
        
        int32_t* eax_5 = *esi_1
        esi_1[7] += 1
        int32_t var_8_4 = 2
        int32_t* ebx = **eax_5
        uint32_t esi_3 = *ebx u>> arg3
        
        if (esi_3 u< 1)
            esi_3 = 1
        
        uint32_t edx_6 = ebx[1] u>> arg3
        
        if (edx_6 u< 1)
            edx_6 = 1
        
        *arg5 = 1
        uint32_t eax_8 = sub_6a9660(arg5, edx_6, esi_3, ebx[6])
        
        if (edi[2] != 0)
            sub_63b870(eax_8, &data_801800, "bufferData->mBufferPtr == 0", 
                "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp", 0x2c5, 
                "Dx11GraphicsInterface::LockTextureBuffer")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        edi[2] = sub_687730(eax_8)
        int32_t edx_7 = ebx[6]
        int32_t eax_12
        
        if (edx_7 - 0xd u> 8)
            eax_12 = sub_6a9570(esi_3, edx_7)
        else
            switch (edx_7)
                case 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x15
                    eax_12 = 0
                case 0x13, 0x14
                    eax_12 = sub_6a9570(esi_3, edx_7)
        
        *arg4 = eax_12
        int32_t result = edi[2]
        
        if (esi_1 != 0)
            esi_1[7] -= 1
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    var_24_1 = "DefAutoLock::DefAutoLock"
    var_28 = 0x19
    var_2c = "C:\x\ax2017\Engine\DefLoad.h"
    ecx_1 = "assetPtr && assetPtr->assetType == assetType"
else
    var_24_1 = "Dx11GraphicsInterface::LockTextureBuffer"
    var_28 = 0x2b9
    var_2c = "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp"
    ecx_1 = "bufferData->mBufferType == DX11BUFFER_TEXTURE"

sub_63b870(eax_3, &data_801800, ecx_1, var_2c, var_28, var_24_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
