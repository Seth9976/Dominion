// 函数: sub_6ff880
// 地址: 0x6ff880
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$__acrt_lock_and_call@V<lambda_46720907175c18b6c9d2717bc0d2d362>@@@@YAXW4__acrt_lock_id@@$$QAV<lambda_46720907175c18b6c9d2717bc0d2d362>@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** Next_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** Next_2
struct _EXCEPTION_REGISTRATION_RECORD** Next_6 = Next_2

if (Next_6 == 0)
    sub_69fd50(Next_3, "!Null\Null", &Next_2, 3)
    struct _EXCEPTION_REGISTRATION_RECORD** Next_7 = Next_6
    char* Next_4 = Next_2
    char* const Next_8 = &data_801800
    
    if (Next_4 != 0)
        Next_8 = Next_4
    
    Next_3 = sub_69f030(Next_8, Next_6 + 3)
    Next_6 = Next_3
    int32_t var_8_1 = 1
    
    if (data_cf65bc != 0)
        Next_3 = Next_2
        
        if (Next_3 != 0 && *Next_3 != 0)
            Next_3 = sub_63d4e0(&Next_2)
            int32_t temp3_1 = Next_3[1]
            Next_3[1] -= 1
            
            if (temp3_1 == 1)
                Next_3 = sub_64c080(Next_3, &Next_3[3][2])
                Next_2 = &data_801800
    
    int32_t var_8_2 = 0xffffffff
else if (Next_6[1] != 3)
    sub_63b870(Next_3, &data_801800, "assetPtr && assetPtr->assetType == assetType", 
        "C:\x\ax2017\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (*Next_6 == 0)
    sub_69f4a0(Next_3, 0, Next_6, 1)

struct _EXCEPTION_REGISTRATION_RECORD* eax_3 = *Next_6
Next_6[7] = &Next_6[7]->Next + 1
struct _EXCEPTION_REGISTRATION_RECORD* Next = eax_3->Next
int32_t var_8_3 = 2
struct _EXCEPTION_REGISTRATION_RECORD** Next_1 = Next->Next
Next_2 = Next_1
char const* const var_34
int32_t var_30
char const* const var_2c
char* ecx_4

if (arg2 != 0)
    Next = zx.d(arg2.w)
    void* ebx_2
    
    if (Next u< *(arg1 + 0x4250))
        ebx_2 = Next * 0x14c + *(arg1 + 0x424c)
    
    if (Next u>= *(arg1 + 0x4250) || *(ebx_2 + 0x148) != arg2)
        var_2c = "DataArray<struct OpenGLBufferData>::DataArrayGet"
        var_30 = 0x6d
        ecx_4 = "DataArrayTryToGet(id) != NULL"
        var_34 = "C:\x\ax2017\Engine\DataArray.h"
    else if (*(ebx_2 + 0xd8) == 0)
        if (*(ebx_2 + 0x10) == 0)
            int32_t esi_1 = *(ebx_2 + 0x144)
            *arg5 = esi_1
            uint32_t edi_2 = divu.dp.d(0:(*Next_1), esi_1) u>> arg3
            
            if (edi_2 u< 1)
                edi_2 = 1
            
            uint32_t eax_10 = divu.dp.d(0:(Next_2[1]), esi_1) u>> arg3
            
            if (eax_10 u< 1)
                eax_10 = 1
            
            int32_t eax_11 = sub_6a9660(eax_10, eax_10, edi_2, Next_2[6])
            int32_t var_14
            (*__glewGenBuffers)(1, &var_14)
            (*__glewBindBuffer)(0x88ec, var_14)
            (*__glewBufferData)(0x88ec, eax_11, 0, 0x88e4)
            glPixelStorei(0xcf5, 1)
            int32_t eax_15 = (*__glewMapBuffer)(0x88ec, 0x88b9)
            struct _EXCEPTION_REGISTRATION_RECORD** Next_5 = Next_2
            *(ebx_2 + 0xd8) = eax_15
            *(ebx_2 + 0xd4) = var_14
            int32_t edx_9 = Next_5[6]
            int32_t eax_19
            
            if (edx_9 - 0xd u> 8)
            label_6ffaaf:
                uint32_t eax_21 = *Next_5 u>> arg3
                
                if (eax_21 u< 1)
                    eax_21 = 1
                
                eax_19 = sub_6a9570(eax_21, edx_9)
            else
                switch (edx_9)
                    case 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x15
                        eax_19 = 0
                    case 0x13, 0x14
                        goto label_6ffaaf
            
            *arg4 = eax_19
            int32_t result = *(ebx_2 + 0xd8)
            
            if (Next_6 != 0)
                Next_6[7] -= 1
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        var_2c = "OpenGLInterface::LockTextureBuffer"
        var_30 = 0x588
        var_34 = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
        ecx_4 = "bufferData->mIsLoading == 0"
    else
        var_2c = "OpenGLInterface::LockTextureBuffer"
        var_30 = 0x587
        var_34 = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
        ecx_4 = "bufferData->mBufferPtr == 0"
else
    var_2c = "DataArray<struct OpenGLBufferData>::DataArrayGet"
    var_30 = 0x6c
    ecx_4 = "id != DATAID_NULL"
    var_34 = "C:\x\ax2017\Engine\DataArray.h"

sub_63b870(Next, &data_801800, ecx_4, var_34, var_30, var_2c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
