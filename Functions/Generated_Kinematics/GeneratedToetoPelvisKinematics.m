function [left_pel,right_pel] = GeneratedToetoPelvisKinematics(foot,pel_rot,ql,qr)
%GENERATEDLEFTPELVISKINEMATICS
%    [TOEPOS_LEFT,HEELPOS_LEFT] = GENERATEDLEFTPELVISKINEMATICS(FX,FY,FZ,RZ,RY,RX,Q1,Q2,Q3,Q4,Q5,Q6,Q7,Q8,Q9,Q10,Q11,Q12,Q13,Q14)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    19-May-2022 14:45:18
fx  = foot(1);
fy  = foot(2);  
fz  = foot(3);
rz = pel_rot(1);
ry = pel_rot(2);
rx = pel_rot(3);

q1 = ql(1);
q2 = ql(2);
q3 = ql(3);
q4 = ql(4);
q5 = ql(5);
q6 = ql(6);
q7 = ql(7);

q8 = qr(1);
q9 = qr(2);
q10 = qr(3);
q11 = qr(4);
q12 = qr(5);
q13 = qr(6);
q14 = qr(7);

t2 = cos(q6);
t3 = sin(q7);
t4 = cos(q7);
t5 = sin(q6);
t6 = cos(q5);
t7 = t2.*t3;
t8 = t4.*t5;
t9 = t7+t8;
t10 = sin(q5);
t11 = t2.*t4;
t15 = t3.*t5;
t12 = t11-t15;
t13 = cos(q4);
t14 = t6.*t9;
t16 = t10.*t12;
t17 = t14+t16;
t18 = sin(q4);
t19 = t6.*t12;
t23 = t9.*t10;
t20 = t19-t23;
t21 = sin(q3);
t22 = t13.*t17;
t24 = t18.*t20;
t25 = t22+t24;
t26 = cos(q3);
t27 = t13.*t20;
t30 = t17.*t18;
t28 = t27-t30;
t29 = cos(q1);
t31 = t21.*t28;
t32 = t25.*t26;
t33 = t31+t32;
t34 = sin(q1);
t35 = sin(q2);
t36 = t21.*t25;
t40 = t26.*t28;
t37 = t36-t40;
t38 = cos(rx);
t39 = t29.*t33;
t57 = t34.*t35.*t37;
t41 = t39-t57;
t42 = sin(rx);
t43 = t33.*t34;
t44 = t29.*t35.*t37;
t45 = t43+t44;
t46 = cos(q2);
t47 = cos(rz);
t48 = cos(ry);
t49 = sin(ry);
t50 = sin(rz);
t51 = t29.*t37;
t52 = t33.*t34.*t35;
t53 = t51+t52;
t54 = t34.*t37;
t89 = t29.*t33.*t35;
t55 = t54-t89;
t56 = t38.*t45;
t58 = t41.*t42;
t59 = t56+t58;
t60 = t38.*t41;
t117 = t42.*t45;
t61 = t60-t117;
t62 = t49.*t61;
t63 = t62-t37.*t46.*t48;
t64 = t4.*(1.0./2.5e1);
t65 = t3.*(5.1e1./1.25e2);
t66 = t21.*t28.*(9.0./1.0e2);
t67 = t2.*t3.*4.3476e-1;
t68 = t4.*t5.*4.3476e-1;
t69 = t3.*t5.*(1.0./5.0e1);
t70 = t13.*t17.*(3.0./2.5e1);
t71 = t18.*t20.*(3.0./2.5e1);
t72 = t33.*t34.*(2.7e1./2.0e2);
t73 = t6.*t9.*6.068e-2;
t74 = t9.*t10.*4.741e-2;
t75 = t10.*t12.*6.068e-2;
t76 = t25.*t26.*(9.0./1.0e2);
t77 = t29.*t35.*t37.*(2.7e1./2.0e2);
t118 = t2.*t4.*(1.0./5.0e1);
t119 = t37.*t46.*(4.9e1./1.0e3);
t120 = t6.*t12.*4.741e-2;
t78 = fy+t64+t65+t66+t67+t68+t69+t70+t71+t72+t73+t74+t75+t76+t77-t118-t119-t120-1.036130087749231e-1;
t79 = t35.*t48;
t80 = t29.*t42.*t46;
t81 = t34.*t38.*t46;
t82 = t80+t81;
t83 = t79-t49.*t82;
t84 = t29.*t38.*t46;
t85 = t84-t34.*t42.*t46;
t86 = t35.*(4.9e1./1.0e3);
t87 = t29.*t46.*(2.7e1./2.0e2);
t88 = fz+t86+t87-4.5e-3;
t90 = t38.*t55;
t91 = t42.*t53;
t92 = t90+t91;
t93 = t38.*t53;
t109 = t42.*t55;
t94 = t93-t109;
t95 = t49.*t94;
t96 = t33.*t46.*t48;
t97 = t95+t96;
t98 = t4.*(5.1e1./1.25e2);
t99 = t2.*t4.*4.3476e-1;
t100 = t2.*t3.*(1.0./5.0e1);
t101 = t4.*t5.*(1.0./5.0e1);
t102 = t13.*t20.*(3.0./2.5e1);
t103 = t6.*t9.*4.741e-2;
t104 = t6.*t12.*6.068e-2;
t105 = t10.*t12.*4.741e-2;
t106 = t26.*t28.*(9.0./1.0e2);
t107 = t29.*t33.*t35.*(2.7e1./2.0e2);
t110 = t3.*(1.0./2.5e1);
t111 = t21.*t25.*(9.0./1.0e2);
t112 = t3.*t5.*4.3476e-1;
t113 = t17.*t18.*(3.0./2.5e1);
t114 = t33.*t46.*(4.9e1./1.0e3);
t115 = t34.*t37.*(2.7e1./2.0e2);
t116 = t9.*t10.*6.068e-2;
t108 = -fx+t98+t99+t100+t101+t102+t103+t104+t105+t106+t107-t110-t111-t112-t113-t114-t115-t116-4.366355544951825e-2;
left_pel = [t78.*(t50.*t59+t47.*t63)+t88.*(t47.*t83+t50.*t85)-t108.*(t50.*t92+t47.*t97);-t78.*(t47.*t59-t50.*t63)-t88.*(t47.*t85-t50.*t83)+t108.*(t47.*t92-t50.*t97);t78.*(t48.*t61+t37.*t46.*t49)-t108.*(t48.*t94-t33.*t46.*t49)-t88.*(t35.*t49+t48.*t82)];
if nargout > 1
    t121 = cos(q13);
    t122 = sin(q14);
    t123 = cos(q14);
    t124 = sin(q13);
    t125 = cos(q12);
    t126 = t121.*t122;
    t127 = t123.*t124;
    t128 = t126+t127;
    t129 = sin(q12);
    t130 = t121.*t123;
    t134 = t122.*t124;
    t131 = t130-t134;
    t132 = cos(q11);
    t133 = t125.*t128;
    t135 = t129.*t131;
    t136 = t133+t135;
    t137 = sin(q11);
    t138 = t125.*t131;
    t142 = t128.*t129;
    t139 = t138-t142;
    t140 = sin(q10);
    t141 = t132.*t136;
    t143 = t137.*t139;
    t144 = t141+t143;
    t145 = cos(q10);
    t146 = t132.*t139;
    t149 = t136.*t137;
    t147 = t146-t149;
    t148 = cos(q8);
    t150 = t140.*t147;
    t151 = t144.*t145;
    t152 = t150+t151;
    t153 = sin(q8);
    t154 = sin(q9);
    t155 = t140.*t144;
    t158 = t145.*t147;
    t156 = t155-t158;
    t157 = t148.*t152;
    t170 = t153.*t154.*t156;
    t159 = t157-t170;
    t160 = t152.*t153;
    t161 = t148.*t154.*t156;
    t162 = t160+t161;
    t163 = cos(q9);
    t164 = t148.*t156;
    t165 = t152.*t153.*t154;
    t166 = t164+t165;
    t167 = t153.*t156;
    t199 = t148.*t152.*t154;
    t168 = t167-t199;
    t169 = t38.*t162;
    t171 = t42.*t159;
    t172 = t169+t171;
    t173 = t38.*t159;
    t228 = t42.*t162;
    t174 = t173-t228;
    t175 = t49.*t174;
    t176 = t175-t48.*t156.*t163;
    t177 = t123.*(1.0./2.5e1);
    t178 = t122.*(5.1e1./1.25e2);
    t179 = t140.*t147.*(9.0./1.0e2);
    t180 = t121.*t122.*4.3476e-1;
    t181 = t123.*t124.*4.3476e-1;
    t182 = t122.*t124.*(1.0./5.0e1);
    t183 = t132.*t136.*(3.0./2.5e1);
    t184 = t137.*t139.*(3.0./2.5e1);
    t185 = t125.*t128.*6.068e-2;
    t186 = t128.*t129.*4.741e-2;
    t187 = t129.*t131.*6.068e-2;
    t188 = t144.*t145.*(9.0./1.0e2);
    t229 = t121.*t123.*(1.0./5.0e1);
    t230 = t156.*t163.*(4.9e1./1.0e3);
    t231 = t152.*t153.*(2.7e1./2.0e2);
    t232 = t125.*t131.*4.741e-2;
    t233 = t148.*t154.*t156.*(2.7e1./2.0e2);
    t189 = fy+t177+t178+t179+t180+t181+t182+t183+t184+t185+t186+t187+t188-t229-t230-t231-t232-t233-1.036130087749231e-1;
    t190 = t48.*t154;
    t191 = t42.*t148.*t163;
    t192 = t38.*t153.*t163;
    t193 = t191+t192;
    t194 = t190-t49.*t193;
    t195 = t38.*t148.*t163;
    t196 = t195-t42.*t153.*t163;
    t197 = t154.*(4.9e1./1.0e3);
    t227 = t148.*t163.*(2.7e1./2.0e2);
    t198 = fz+t197-t227+4.5e-3;
    t200 = t38.*t168;
    t201 = t42.*t166;
    t202 = t200+t201;
    t203 = t38.*t166;
    t219 = t42.*t168;
    t204 = t203-t219;
    t205 = t49.*t204;
    t206 = t48.*t152.*t163;
    t207 = t205+t206;
    t208 = t123.*(5.1e1./1.25e2);
    t209 = t121.*t123.*4.3476e-1;
    t210 = t121.*t122.*(1.0./5.0e1);
    t211 = t123.*t124.*(1.0./5.0e1);
    t212 = t132.*t139.*(3.0./2.5e1);
    t213 = t153.*t156.*(2.7e1./2.0e2);
    t214 = t125.*t128.*4.741e-2;
    t215 = t125.*t131.*6.068e-2;
    t216 = t129.*t131.*4.741e-2;
    t217 = t145.*t147.*(9.0./1.0e2);
    t220 = t122.*(1.0./2.5e1);
    t221 = t140.*t144.*(9.0./1.0e2);
    t222 = t122.*t124.*4.3476e-1;
    t223 = t136.*t137.*(3.0./2.5e1);
    t224 = t152.*t163.*(4.9e1./1.0e3);
    t225 = t128.*t129.*6.068e-2;
    t226 = t148.*t152.*t154.*(2.7e1./2.0e2);
    t218 = -fx+t208+t209+t210+t211+t212+t213+t214+t215+t216+t217-t220-t221-t222-t223-t224-t225-t226-4.366355544951825e-2;
    right_pel = [t189.*(t50.*t172+t47.*t176)+t198.*(t47.*t194+t50.*t196)-t218.*(t50.*t202+t47.*t207);-t189.*(t47.*t172-t50.*t176)-t198.*(t47.*t196-t50.*t194)+t218.*(t47.*t202-t50.*t207);t189.*(t48.*t174+t49.*t156.*t163)-t218.*(t48.*t204-t49.*t152.*t163)-t198.*(t49.*t154+t48.*t193)];
end
