// 函数: sub_5fb880
// 地址: 0x5fb880
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t ecx = *arg1
int32_t esi = 0
int32_t edi = 1
int32_t var_ac = ecx
int32_t ebx
ebx.b = 0
int32_t var_a8[0x28]

for (int128_t* const i = &data_77fea0; i != &data_77fee8; )
    if ((ecx & edi) != 0)
        int32_t ecx_1 = *i
        
        if (ecx_1 != 0x13)
            var_a8[esi] = ecx_1
            esi += 1
        else
            ebx.b = 1
        
        ecx = var_ac
    
    i += 4
    edi *= 2

if (ebx.b != 0)
    var_a8[esi] = 0x13
    esi += 1

int32_t eax_3 = 0
int32_t edx
int32_t ebx_1

if (esi s> 0)
    while (true)
        if (var_a8[eax_3] == arg2)
            int32_t eax_5 = (&var_ac)[esi]
            esi -= 1
            var_a8[eax_3] = eax_5
            goto label_5fb926
        
        eax_3 += 1
        
        if (eax_3 s>= esi)
            int32_t eax_4 = 0
            
            while (var_a8[eax_4] != arg2)
                eax_4 += 1
                
                if (eax_4 s>= esi)
                    goto label_5fb91e
            
            ebx_1 = 0
            edx = 0
            break
    
    goto label_5fb96a

label_5fb91e:
var_a8[esi] = arg2
esi += 1
label_5fb926:
ebx_1 = 0
edx = 0

if (esi s> 0)
label_5fb96a:
    
    do
        int32_t ecx_3 = 1
        
        for (int128_t* const i_1 = &data_77fea0; i_1 != &data_77fee8; )
            if (var_a8[edx] == *i_1)
                ebx_1 |= ecx_3
                break
            
            i_1 += 4
            ecx_3 *= 2
        
        edx += 1
    while (edx s< esi)

*arg1 = ebx_1
CookieCheckFunction(arg1)
return arg1
