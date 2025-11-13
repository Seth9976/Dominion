// 函数: sub_6417e0
// 地址: 0x6417e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t _C_2 = arg1
char* esi = arg2
int32_t* _C_4 = _C_2
char const* const var_34
int32_t var_30
char const* const var_2c_1
char* ecx

if (*(_C_2 + 4) == 0x25)
    _C_2 = sub_5af880(arg1)
    char ecx_1 = *esi
    uint32_t _C_3 = _C_2
    float var_14_1 = 0f
    
    if (ecx_1 == 0)
        return _C_2
    
    while (true)
        if (ecx_1 u< 0x80)
        label_64185a:
            char* var_8 = esi
            _C_2 = sub_5a0d00(&var_8)
            char edx = *esi
            uint32_t _C_1 = _C_2
            var_8 = esi
            
            if (edx u>= 0x80 && (edx & 0xe0) != 0xc0)
                _C_2.b = edx
                _C_2.b &= 0xf0
                
                if (_C_2.b != 0xe0 && (edx & 0xf8) != 0xf0)
                    var_2c_1 = "Xutf8_next"
                    var_30 = 0x222
                    break
            
            sub_5a0d00(&var_8)
            esi = var_8
            char ecx_5 = *esi
            
            if (ecx_5 u< 0x80)
            label_6418bd:
                var_8 = esi
                uint32_t _C = sub_5a0d00(&var_8)
                char* xmm0_1 = 0x3f800000
                arg4 f- 0
                var_8 = 0x3f800000
                uint32_t eax
                eax:1.b = (arg4 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg4, 0f) ? 1 : 0) << 2
                    | (arg4 < 0f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    if (islower(_C_1) != 0 || _C_1 == 0x20)
                        _C_1 = toupper(_C_1.b)
                        var_8 = arg4
                    
                    eax = islower(_C)
                    
                    if (eax != 0 || _C == 0x20)
                        eax = toupper(_C.b)
                    
                    xmm0_1 = var_8
                
                void* eax_3 = sub_642680(eax, _C_1, _C_4, xmm0_1 f* arg3, 0)
                ecx_1 = *esi
                var_14_1 = (*(eax_3 + 0x40) + 0f f+ *(_C_3 + 0x44)) * arg3 f* var_8 + var_14_1
                
                if (ecx_1 == 0)
                    return _C_3
                
                continue
            else
                _C_2.b = ecx_5
                _C_2.b &= 0xe0
                
                if (_C_2.b == 0xc0)
                    goto label_6418bd
                
                _C_2.b = ecx_5
                _C_2.b &= 0xf0
                
                if (_C_2.b == 0xe0 || (ecx_5 & 0xf8) == 0xf0)
                    goto label_6418bd
        else
            _C_2.b = ecx_1
            _C_2.b &= 0xe0
            
            if (_C_2.b == 0xc0)
                goto label_64185a
            
            _C_2.b = ecx_1
            _C_2.b &= 0xf0
            
            if (_C_2.b == 0xe0 || (ecx_1 & 0xf8) == 0xf0)
                goto label_64185a
        
        var_2c_1 = "Xutf8_peek_next"
        var_30 = 0x21c
        break
    
    var_34 = "C:\x\ax2017\Engine\Xutf8.cpp"
    ecx = "!Xutf8_is_invalid_lead_char(str)"
else
    var_2c_1 = "TTFontGet"
    var_30 = 0x1ef
    var_34 = "C:\x\ax2017\Engine\TTFont.cpp"
    ecx = "ttf->assetType == ASSET_TYPE_TRUETYPE"

sub_63b870(_C_2, &data_801800, ecx, var_34, var_30, var_2c_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
