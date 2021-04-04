export ZSH="${HOME}/.oh-my-zsh" 
 
ZSH_THEME="robbyrussell" 
 
plugins=(git) 
 
source $ZSH/oh-my-zsh.sh 

export PATH=/usr/local/bundle/bin:/usr/local/bundle/gems/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin 
 
alias nerf='vim ~/.zshrc' 
alias nerfdone='source ~/.zshrc' 
alias norminette='/etc/norminette-client/norminette.rb -R CheckForbiddenSourceHeader' 
alias norm='norminette *.c' 
alias basecamp='bash ${HOME}/.basecamp/basecamp' 
alias clean='find ./ -name 'core' -print -delete | find ./ -name 'a.out' -print -delete' 
alias cc='gcc -Werror -Wextra -Wall *.c && ./a.out' 
 
mkcd() { mkdir "$1" && cd "$1" };
