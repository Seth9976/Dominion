// 函数: sub_589f70
// 地址: 0x589f70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = sub_583fc0(arg1, arg2, arg3, 0xc00)
int32_t eax_1 = arg3[arg2 * 0x168c + 0x5d3d]
int32_t eax_2 = sub_583fc0(eax_1, arg2, arg3, 0xa00)
int32_t esi_1 = eax_2
int32_t result = sub_576b30(eax_2, arg2, arg3, 0x29, 0, 0, 0)

if (result s> 0)
    result = sub_583fc0(result, arg2, arg3, 0x601)
    esi_1 += result

if (eax != 0)
    result = eax_1 + esi_1
    
    if (eax_1 != neg.d(esi_1))
        result = sub_586ae0(result, arg2, arg3, arg4)
        
        if (result != 0)
            return sub_574780(result, arg2, arg3, result)

return result
