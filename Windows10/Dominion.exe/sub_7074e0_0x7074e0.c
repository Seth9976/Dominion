// 函数: sub_7074e0
// 地址: 0x7074e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t (* result)(char const* _Str1, char const* _Str2, uint32_t _MaxCount)

if (sub_707330(arg1, 0).b == 0)
    if (sub_707330(arg1, 0x3c).b != 0)
        if (sub_707330(arg1, 0x2f) == 0)
            sub_7072d0(arg1)
            
            if (sub_707390(arg1).b != 0)
                *(arg1 + 4) = 1
                result.b = 1
                return result
        else
            result = sub_707390(arg1)
            
            if (result.b != 0 && *(arg1 + 0x124) != 0)
                int32_t* ecx_3 = *(arg1 + 0x120)
                
                if (ecx_3 == 0)
                    sub_63b870(result, &data_801800, "mpTail != NULL", 
                        "C:\x\ax2017\Engine\xList.h", 0x5a, "XList<struct XmlReadToken>::GetTail")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                if (_strnicmp(*ecx_3, *(arg1 + 0xc), *(arg1 + 0x10)) == 0)
                    sub_7072d0(arg1)
                    
                    if (sub_707330(arg1, 0x3e).b != 0)
                        *(arg1 + 4) = 4
                        result.b = 1
                        return result
else if (*(arg1 + 0x124) == 0)
    *(arg1 + 4) = 5
    result.b = 1
    return result

result.b = 0
return result
