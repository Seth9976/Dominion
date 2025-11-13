// 函数: sub_695c80
// 地址: 0x695c80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??$initialize_tmpfile_buffer_nolock@D@@YA_NW4buffer_id@?A0x5b9a7937@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_50 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *arg3
struct _EXCEPTION_REGISTRATION_RECORD** result

if (ecx != 0)
    while (true)
        int32_t* ecx_1 = ecx[1]
        int32_t* ecx_2 = *ecx
        uint32_t _Buffer = ecx_2[1]
        char const* const var_5c_4
        int32_t var_58_5
        char const* const var_54_7
        char* ecx_18
        
        if (_Buffer u> 0x25)
            var_54_7 = "AssetTypeGetInfo"
            var_58_5 = 0xc3
            var_5c_4 = "C:\x\ax2017\Engine\AssetTypeRegistry.cpp"
            ecx_18 = "assetType >= 0 && assetType < ASSET_TYPE_COUNT"
        else
            void* ebx_1 = *((_Buffer << 5) + data_147b07c + 0x1c)
            _Buffer = sub_5af880(ecx_2)
            uint32_t ecx_3 = *(ebx_1 + 0xc)
            char** _Buffer_1 = _Buffer
            
            if (ecx_3 == 0)
                var_54_7 = "DefinitionGetSize"
                var_58_5 = 0x6d
                var_5c_4 = "C:\x\ax2017\Engine\Definition.cpp"
                ecx_18 = "pDefMap->definitionSize != 0"
            else
                int32_t var_3c = 0
                int32_t var_38_1 = 0
                char var_30_1 = 1
                int32_t var_2c_1 = 0
                _Buffer = sub_694da0(_Buffer, ebx_1, _Buffer, 0, &var_3c)
                
                if (ecx_3 s<= 0)
                    var_54_7 = "XMalloc"
                    var_58_5 = 0x3d
                    var_5c_4 = "C:\x\ax2017\Engine\xMemory.cpp"
                    ecx_18 = "size > 0"
                else if (ecx_3 s>= 0x77359400)
                    var_54_7 = "XMalloc"
                    var_58_5 = 0x3e
                    var_5c_4 = "C:\x\ax2017\Engine\xMemory.cpp"
                    ecx_18 = "size < 2000000000"
                else
                    _Buffer = _aligned_malloc(ecx_3, 0x10)
                    
                    if (_Buffer == 0)
                        var_54_7 = "XMalloc"
                        var_58_5 = 0x57
                        var_5c_4 = "C:\x\ax2017\Engine\xMemory.cpp"
                        ecx_18 = "pBuffer"
                    else
                        if (arg4 == 0)
                            sub_695020(_Buffer, ebx_1, _Buffer_1, _Buffer, ecx_3)
                        label_695e59:
                            uint32_t eax_8 = fwrite(_Buffer, ecx_3, 1, arg2)
                            _aligned_free(_Buffer)
                            
                            if (eax_8 != 1)
                            label_695ee1:
                                result.b = 0
                                fsbase->NtTib.ExceptionList = ExceptionList
                                return result
                            
                            ecx = ecx_1
                            
                            if (ecx == 0)
                                break
                            
                            continue
                        
                        char* const edx_1 = &data_801800
                        char* ecx_6 = ecx_2[8]
                        
                        if (ecx_6 != 0)
                            edx_1 = ecx_6
                        
                        struct _EXCEPTION_REGISTRATION_RECORD** result_1
                        sub_6c48e0(&result_1, edx_1)
                        int32_t var_8_1 = 0
                        char* const _FileName = &data_801800
                        struct _EXCEPTION_REGISTRATION_RECORD** _FileName_1 = result_1
                        
                        if (_FileName_1 != 0)
                            _FileName = _FileName_1
                        
                        FILE* _Stream = fopen(_FileName, "rb")
                        
                        if (_Stream == 0)
                            struct _EXCEPTION_REGISTRATION_RECORD** result_3 = result_1
                            struct _EXCEPTION_REGISTRATION_RECORD** result_4 = &data_801800
                            
                            if (result_3 != 0)
                                result_4 = result_3
                            
                            struct _EXCEPTION_REGISTRATION_RECORD** result_5 = result_4
                            sub_63b5f0("DefBinWritePackAssets Failed to open %s")
                            int32_t var_8_4 = 1
                            
                            if (data_cf65bc != 0)
                                result = result_1
                                
                                if (result != 0 && *result != 0)
                                    result = sub_63d4e0(&result_1)
                                    int32_t temp0_1 = result[1]
                                    result[1] -= 1
                                    
                                    if (temp0_1 == 1)
                                        sub_64c080(result, &result[3][2])
                            
                            goto label_695ee1
                        
                        fseek(_Stream, 0, 2)
                        uint32_t eax_6 = ftell(_Stream)
                        int32_t var_58_6
                        char* ecx_19
                        
                        if (eax_6 != ecx_3 + 0xb4)
                            char const* const var_54_9 = "DefBinWritePackAssets"
                            var_58_6 = 0x4a0
                            ecx_19 = "Halt"
                        label_695f98:
                            sub_63b870(eax_6, &data_801800, ecx_19, 
                                "C:\x\ax2017\Engine\DefBin.cpp", var_58_6, "DefBinWritePackAssets")
                            
                            if (sub_63bc30() != 0)
                                breakpoint
                            
                            sub_63bb00()
                            noreturn
                        
                        fseek(_Stream, 0xb4, 0)
                        eax_6 = fread(_Buffer, 1, ecx_3, _Stream)
                        
                        if (eax_6 != ecx_3)
                            char const* const var_54_8 = "DefBinWritePackAssets"
                            var_58_6 = 0x4a6
                            ecx_19 = "read_len == (size_t)dataSize"
                            goto label_695f98
                        
                        fclose(_Stream)
                        int32_t var_8_2 = 2
                        
                        if (data_cf65bc != 0)
                            struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result_1
                            
                            if (result_2 != 0 && *result_2 != 0)
                                char* eax_7 = sub_63d4e0(&result_1)
                                int32_t temp1_1 = *(eax_7 + 4)
                                *(eax_7 + 4) -= 1
                                
                                if (temp1_1 == 1)
                                    sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
                                    result_1 = &data_801800
                        
                        int32_t var_8_3 = 0xffffffff
                        goto label_695e59
        
        sub_63b870(_Buffer, &data_801800, ecx_18, var_5c_4, var_58_5, var_54_7)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
