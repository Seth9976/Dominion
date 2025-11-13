// 函数: sub_6aacf0
// 地址: 0x6aacf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

FILE* _Stream_5 = arg2
FILE* _Stream
FILE* _Stream_1

if (fopen_s(&_Stream, arg2, "rb") == 0)
    _Stream_1 = _Stream
else
    _Stream_1 = nullptr
    _Stream = nullptr

uint32_t eax_2

if (_Stream_1 != 0)
    eax_2 = sub_720140(_Stream_1)
    fclose(_Stream_1)

char const* const var_3c_4
int32_t var_38_2
char const* const var_34_2
errno_t eax_3
char* ecx_2
float* _Stream_4
int32_t var_20
int32_t var_1c
errno_t var_8
void* const esi_3

if (_Stream_1 == 0 || eax_2 == 0)
    int32_t ecx_4
    eax_3, ecx_4 = fopen_s(&_Stream_5, _Stream_5, "rb")
    FILE* _Stream_3
    
    if (eax_3 == 0)
        _Stream_3 = _Stream_5
    else
        _Stream_3 = nullptr
        _Stream_5 = nullptr
    
    if (_Stream_3 != 0)
        int32_t var_34_4 = ecx_4
        char* _Stream_7 = sub_71fcf0(&var_1c, &var_20, _Stream_3, &var_1c, &var_8)
        eax_3 = fclose(_Stream_3)
        _Stream_4 = _Stream_7
        
        if (_Stream_7 != 0)
            eax_3 = var_8
            
            if (eax_3 != 4)
                if (eax_3 == 3)
                    esi_3 = eax_3 + 0x11
                    goto label_6aae96
                
                if (eax_3 == 1)
                    esi_3 = 0xa
                    goto label_6aae96
                
                var_34_2 = "TextureLoadFileWithSTB"
                var_38_2 = 0x371
                ecx_2 = "Halt"
                var_3c_4 = "C:\x\ax2017\Engine\TextureImport.cpp"
            else
                esi_3 = eax_3 - 2
            label_6aae96:
                int32_t edi = var_20
                
                if (esi_3 - 0xd u> 8)
                    int32_t eax_9
                    
                    if (sub_6a9450(esi_3) * edi s>= 4)
                        eax_9 = sub_6a9450(esi_3) * edi
                    else
                        eax_9 = 4
                    
                    int32_t esi_5 = arg1[4]
                    int32_t edi_1 = var_20
                    int32_t var_18_1 = eax_9
                    int32_t eax_11 = var_1c
                    arg1[1] = edi_1
                    arg1[2] = eax_11
                    
                    if (esi_5 == 0)
                        if (esi_3 != 0xa)
                            arg1[4] = 1
                            esi_5 = 1
                        else
                            arg1[4] = 0xa
                            esi_5 = 0xa
                        
                        goto label_6aaf1a
                    
                    if (esi_5 - 0xd u> 8)
                    label_6aaf1a:
                        int32_t eax_14
                        
                        if (sub_6a9450(esi_5) * edi_1 s>= 4)
                            eax_14 = sub_6a9450(esi_5) * edi_1
                        else
                            eax_14 = 4
                        
                        int32_t var_34_5 = arg1[4]
                        int32_t edx_2 = arg1[2]
                        int32_t ecx_10 = arg1[1]
                        arg1[3] = eax_14
                        *arg1 = sub_687730(sub_6a9660(eax_14, edx_2, ecx_10, var_34_5))
                        sub_6a9de0(&_Stream_4, arg1)
                        free(_Stream_4)
                        int32_t result
                        result.b = 1
                        return result
                    
                    eax_3 = zx.d(*(esi_5 + 0x6aafcf))
                    
                    switch (eax_3)
                        case 1
                            goto label_6aaf1a
                else
                    eax_3 = zx.d(*(esi_3 + 0x6aafbb))
                
                var_34_2 = "TextureFormatPitch"
                var_38_2 = 0x85
                var_3c_4 = "C:\x\ax2017\Engine\ImageUtils.cpp"
                ecx_2 = "!TextureFormatIsCompressed(format)"
        else
            var_34_2 = "TextureLoadFileWithSTB"
            var_38_2 = 0x34f
            ecx_2 = "sourceSpec.pImage"
            var_3c_4 = "C:\x\ax2017\Engine\TextureImport.cpp"
    else
        var_34_2 = "TextureLoadFileWithSTB"
        _Stream_4 = _Stream_3
        ecx_2 = "sourceSpec.pImage"
        var_38_2 = 0x34f
        var_3c_4 = "C:\x\ax2017\Engine\TextureImport.cpp"
else
    int32_t ecx_1
    eax_3, ecx_1 = fopen_s(&_Stream, _Stream_5, "rb")
    float* _Stream_2
    
    if (eax_3 == 0)
        _Stream_2 = _Stream
    else
        _Stream_2 = nullptr
        _Stream = nullptr
    
    if (_Stream_2 != 0)
        int32_t var_34_3 = ecx_1
        float* _Stream_6 = sub_720040(&var_1c, &var_20, _Stream_2, &var_1c, &var_8)
        eax_3 = fclose(_Stream_2)
        _Stream_4 = _Stream_6
        
        if (_Stream_6 != 0)
            eax_3 = var_8
            
            if (eax_3 == 4)
                esi_3 = eax_3 + 0x70
                goto label_6aae96
            
            if (eax_3 == 3)
                esi_3 = 0x3e8
                goto label_6aae96
            
            if (eax_3 == 1)
                esi_3 = eax_3 + 0x71
                goto label_6aae96
            
            var_34_2 = "TextureLoadFileWithSTB"
            var_38_2 = 0x349
            ecx_2 = "Halt"
            var_3c_4 = "C:\x\ax2017\Engine\TextureImport.cpp"
        else
            var_34_2 = "TextureLoadFileWithSTB"
            var_38_2 = 0x339
            ecx_2 = "sourceSpec.pImage"
            var_3c_4 = "C:\x\ax2017\Engine\TextureImport.cpp"
    else
        var_34_2 = "TextureLoadFileWithSTB"
        _Stream_4 = _Stream_2
        ecx_2 = "sourceSpec.pImage"
        var_38_2 = 0x339
        var_3c_4 = "C:\x\ax2017\Engine\TextureImport.cpp"
sub_63b870(eax_3, &data_801800, ecx_2, var_3c_4, var_38_2, var_34_2)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
