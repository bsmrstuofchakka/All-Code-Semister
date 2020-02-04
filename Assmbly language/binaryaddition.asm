.MODEL SMALL
.STACK 100H

.DATA
   

.CODE
   MAIN PROC
     MOV BL,0
     MOV CX,8
     MOV AH,1
     
L1:  INT 21H
     CMP AL,0DH
     JE OUT
     SUB AL 30H
     SHL BL,1
     OR BL,AL
     LOOP L1
     
 OUT:MOV B1,BL
     
     MOV AH,9
     INT 21H
     MOV BL,0
     MOV CX,8
     MOV AH,1
     
 L2: INT 21H
     CMP AL,0DH
     JE OUT2
     SUB AL,30H
     SHL BL,1
     OR BL,AL
     LOOP L2
     
OUT2:MOV B2,BL
     MOV AH,9 
     
     
     
     
                   

     MOV AH, 4CH                  
     INT 21H
   MAIN ENDP
 END MAIN


