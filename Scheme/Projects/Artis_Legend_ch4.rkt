#lang scheme

(define return-last-negative
  (lambda (lst)
    (last_element (clean_positive lst))
    ))
(define clean_positive
  (lambda (lst)
     (if (null? lst) 
        '()
        (if(positive? (car lst))
                    (clean_positive (cdr lst))
                    (cons (car lst) (clean_positive (cdr lst)))))))

(define last_element
  (lambda (lst)
    (if(null? lst)
       '()
       (if(null? (cdr lst))
          (car lst)
          (last_element (cdr lst))))))

(define show_multiples 
  (lambda (lst n)
     (if (null? lst) 
        '()
        (if(equal? (modulo (car lst) n) 0)
           (cons (car lst) (show_multiples (cdr lst)n))
                    (show_multiples (cdr lst)n)))))

(define show_multiples2
  (lambda (lst n)
    (filter (lambda (x)
     (if(equal? (modulo x n) 0)
        true
       false)) lst)
   ))

;;;; Test                    
 (display "return-last-negative testing")(newline)
(return-last-negative '(1 -2 4 8))
(return-last-negative '(1 2 3 4))
(return-last-negative '(-1 -2 -3 -4 -5 1))
(return-last-negative '(-1 -2 -3 -4 -5))
(display "show_multiples testing")(newline)
(show_multiples '(4 -2 8 2) 2)
(show_multiples '(10 9 8 7 6) 20)
(show_multiples '(3 -25 8 9) 3)
(display "show_multiples2 testing")(newline)
(show_multiples2 '(4 -2 8 2) 2)
(show_multiples2 '(10 9 8 7 6) 20)
(show_multiples2 '(3 -25 8 9) 3)