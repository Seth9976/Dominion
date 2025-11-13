// 函数: sub_72ea50
// 地址: 0x72ea50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t _Buffer = arg1[4] - 1
int32_t var_3c_1
char const* const ecx_3

if (_Buffer u> 9)
label_72ebe9:
    char const* const var_38_11 = "PngWriteImageSpecToFile"
    var_3c_1 = 0x6a
    ecx_3 = "Halt"
label_72ebff:
    sub_63b870(_Buffer, &data_801800, ecx_3, "C:\x\ax2017\Engine\stb_image_resize.cpp", var_3c_1, 
        "PngWriteImageSpecToFile")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

_Buffer = zx.d(lookup_table_72ec2c[_Buffer])
uint32_t _ElementCount
char* eax_1

switch (_Buffer)
    case 0
        uint128_t xmm0_1 = *arg1
        int32_t var_14_1 = 2
        uint128_t var_24 = xmm0_1
        void* xmm0_2 = _mm_bsrli_si128(xmm0_1, 4)
        int32_t eax_2 = sub_6a9570(xmm0_2, 2)
        var_24:0xc.d = eax_2
        _Buffer = sub_687730(sub_6a9660(eax_2, var_24:8.d, xmm0_2, 2))
        uint32_t _Buffer_2 = _Buffer
        var_24.d = _Buffer_2
        
        if (_Buffer_2 != 0)
            sub_6a9de0(arg1, &var_24)
            _Buffer = sub_71f100(&_ElementCount, var_24:0xc.d, _Buffer_2, xmm0_2, var_24:8.d, 4, 
                &_ElementCount)
            
            if (_Buffer != 0)
                FILE* _Stream = fopen(arg2, "wb")
                
                if (_Stream != 0)
                    fwrite(_Buffer, 1, _ElementCount, _Stream)
                    fclose(_Stream)
                    free(_Buffer)
                    char var_5 = 1
                    _aligned_free(_Buffer_2)
                    int32_t eax_5
                    eax_5.b = var_5
                    return eax_5
                
                _Buffer = free(_Buffer)
            
            char const* const var_38_3 = "PngWriteImageSpecToFile"
            var_3c_1 = 0x5d
            ecx_3 = "result"
        else
            char const* const var_38 = "PngWriteImageSpecToFile"
            var_3c_1 = 0x59
            ecx_3 = "swizzled.pImage != NULL"
        
        goto label_72ebff
    case 1
        eax_1 = 4
    case 2
        eax_1 = 3
    case 3
        eax_1 = 1
    case 4
        goto label_72ebe9

int32_t* _Buffer_1 = sub_71f100(eax_1, arg1[3], *arg1, arg1[1], arg1[2], eax_1, &_ElementCount)

if (_Buffer_1 != 0)
    FILE* _Stream_1 = fopen(arg2, "wb")
    
    if (_Stream_1 != 0)
        fwrite(_Buffer_1, 1, _ElementCount, _Stream_1)
        fclose(_Stream_1)
        free(_Buffer_1)
        int32_t eax_6
        eax_6.b = 1
        return eax_6
    
    free(_Buffer_1)

_Buffer_1.b = 0
return _Buffer_1
