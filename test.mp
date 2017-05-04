% test.mp -- do not edit, generated automatically by thesis_cpena.tex
input feynmp
require_RCS_revision "1.30";
beginchar(1, 60*1.0pt#, 40*1.0pt#, 0);
"feynmf: 1";
LaTeX_unitlength:=1.0pt;
subgraph (0, 0, w, h);
vinit;
pickup pencircle scaled thin;
vleft (__i);
vright (__o);
vconnect ("dashes", __i, __v1);
vconnect ("dashes", __v2, __o);
vlabel ("$h^{0}$", __i);
vlabel ("$h^{0}$", __o);
vconnect ("fermion,left, label=$t$,tension=.3", __v1, __v2, __v1);
vfreeze;
vdraw;
endsubgraph;
endchar;
% the end.
end.
endinput;
