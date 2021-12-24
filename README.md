#### tips exam05 fast (aka the copy paste)
 - Know how to replace all occurences with emacs/vim
    - emacs ?
        - `Meta` + `x` (meta is `escape`)
    - vim ?
        f*** off
 - An output is given at the end of each subject.
   Just a diff should be enough to pass the moulinette.

#### step
 - cpp_module_00:
    - No tips here, just `ctrl+c` and `ctrl+v`
 - cpp_module_01:
    - `cp ../cpp_module_00/Warlock.*pp .`
    - No tips here, just follow in order the subject instruction.
 - cpp_module_02:
    - `cp ../cpp_module_01/*.*pp .`
    - ASpell implementations:  `Firewall` and `Polymorph` in 2 minutes
        - `cp Fwoosh.hpp Fireball.hpp`
            - Open `Fireball.hpp` and replace all occurences of `Fwoosh` by `Fireball`. And voila
        - `cp Fwoosh.cpp Fireball.cpp`
            - Open `Fireball.cpp` and replace all occurences of `Fwoosh` by `Fireball`.
            - copy paste the right effect string from subject, and done.
        - `cp Fwoosh.hpp Polymorph.hpp`
            - Open `Polymorph.cpp` and replace all occurences of `Fwoosh` by `Polymorph`.
        - `cp Fwoosh.cpp Polymorph.cpp`
            - Open `Polymorph.cpp` and replace all occurences of `Fwoosh` by `Polymorph`.
            - copy paste the right effect string from subject.
    - ATarget implementation: `BrickWall` in 1 minute
    - `cp Dummy.hpp BrickWall.hpp`
        - Open `BrickWall.cpp` and replace all occurences of `Dummy` by `BrickWall`.
    - `cp Dummy.cpp BrickWall.cpp`
        - Open `BrickWall.cpp` and replace all occurences of `Dummy` by `BrickWall`.
        - copy paste the right type string from subject, and done.
    - SpellBook:
        - create the basic coplian class + copy paste 3 function prototypes from the subject
        - open `Warlock.*pp` and move the container and the code logic into `SpellBook`
        - Update walock to call the three SpellBook's functions. And done. 
    - TargetGenerator in 15min :
        - `cp SpellBook.hpp TargetGenerator.hpp`
            - replace all occurences of `SpellBook` by `TargetGenerator`.
            - Copy paste the new three finction
        - `cp SpellBook.cpp TargetGenerator.cpp`
            - replace all occurences of `SpellBook` by `TargetGenerator`.
            - Copy paste the new three finction
            - Update getters functions, and variables names. (or not)
    - done
