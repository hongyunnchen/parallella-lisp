(label nfibs
    (lambda (n)
        (if (< n 2)
            n
            (+ 0 (nfibs (- n 1)) (nfibs (- n 2)))
        )
    )
)
(label recurse (lambda (x)
                    (cond ((equal (car x) end) 'stop)
                          (t (recurse (cdr x)))
                    )
               )
)
(recurse (a b c d e f end))
(nfibs 10)

(label ff   (lambda (x y)
                (cons (car x) y)
            )
)
'a
'(a b c)
(car '(a b c))
(cdr '(a b c))
(cons 'a '(b c))
(equal (car '(a b)) 'a)
(equal (car (cdr '(a b))) 'a)
(atom 'a)
(cond ((atom '(1 2)) 'b) (t 'c))
(cond (nil 10) (t 20))
((lambda (x y) (cons (car x) y)) '(a b) (cdr '(c d)))
(ff '(a b) (cdr '(c d)))
(label xx '(a b))
(car xx)
(label xx '(c d))
(car xx)
(define n 5) 
(loop (> n 0) (printl hello) (define n (- n 1)) (terpri 1) ) 