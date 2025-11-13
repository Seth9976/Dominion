// 函数: sub_5fb7d0
// 地址: 0x5fb7d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t esi = 0
int32_t var_ac = arg1
int32_t edi = 1
int32_t ebx
ebx.b = 0
int32_t var_a8[0x28]

for (int128_t* const i = &data_77fea0; i != &data_77fee8; )
    if ((arg1 & edi) != 0)
        int32_t ecx = *i
        
        if (ecx != 0x13)
            var_a8[esi] = ecx
            esi += 1
        else
            ebx.b = 1
        
        arg1 = var_ac
    
    i += 4
    edi *= 2

if (ebx.b != 0)
    var_a8[esi] = 0x13
    esi += 1

uint32_t result = 0

if (esi s> 0)
    do
        if (var_a8[result] == arg2)
            result.b = 1
            CookieCheckFunction(result)
            return result
        
        result += 1
    while (result s< esi)

result.b = 0
CookieCheckFunction(result)
return result
