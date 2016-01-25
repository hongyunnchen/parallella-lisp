
(label ff (lambda (x y)
              (cons (car x) y)
          )
)
(label xx '(a b))
(label nfibs (lambda (n)
                 (if (< n 2) n
                     (+ 0 (nfibs (- n 1)) (nfibs (- n 2)))
                 )
             )
)
(label recurse (lambda (x)
                   (cond ((nilp x) (quote stop))
                         (t (recurse (cdr x)))
                   )
               )
)
(label ll '())
ll
(label lll '((c)a(b)))
lll
(car lll)
(recurse (a b c d e f))
(nfibs 10)
(define n 5)
(loop (> n 0)
      (block 
          (print n)
          (define n (- n 1))
          (terpri 1)
      )
)
(< 1 2) 
(< 2 1) 
(> 1 2) 
(> 2 1) 
(- 0 1 2) 
(* 1 2 3) 
(/ 10 5) 
(+ 1 2 3) 
(= 100 100)

'(a b c)
(equal t t)

(equal nil nil)
'a
(car xx)
(atom 'a)
(car '(a b c))
(cdr xx)

