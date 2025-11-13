// 函数: sub_6e9e30
// 地址: 0x6e9e30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* eax

if (arg2 s> 0)
    eax = *arg1
    
    if (eax != 0 && *eax != 0)
        eax = sub_63d4e0(arg1)
        
        if (arg2 s<= *(eax + 8))
            int32_t i = arg2 - 1
            
            if (i s> 0)
                char* esi_1 = *arg1
                
                do
                    char* eax_1 = &data_801800
                    
                    if (esi_1 != 0)
                        eax_1 = esi_1
                    
                    arg1.b = eax_1[i]
                    
                    if (arg1.b u< 0x80)
                        break
                    
                    eax_1.b = arg1.b
                    eax_1.b &= 0xe0
                    
                    if (eax_1.b == 0xc0)
                        break
                    
                    eax_1.b = arg1.b
                    eax_1.b &= 0xf0
                    
                    if (eax_1.b == 0xe0)
                        break
                    
                    arg1.b &= 0xf8
                    
                    if (arg1.b == 0xf0)
                        break
                    
                    i -= 1
                while (i s> 0)
            
            return i

sub_63b870(eax, &data_801800, "index > 0 && index <= mText.Length()", 
    "C:\x\ax2017\Engine\UITextBox.cpp", 0xec, "UITextBox::Utf8StringLeftOneIndex")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
