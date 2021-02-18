export ZSH="${HOME}/.oh-my-zsh"

ZSH_THEME="robbyrussell"

plugins=(git)

source $ZSH/oh-my-zsh.sh

export GEM_HOME=/usr/local/bundle
export PATH=/usr/local/bundle/bin:/usr/local/bundle/gems/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin

alias norminette="/etc/norminette-client/norminette.rb -R CheckForbiddenSourceHeader"
alias basecamp='bash ${HOME}/.basecamp/basecamp'
alias CC='gcc -Wall -Wextra -Werror'
alias jb='gcc -Wall -Wextra -Werror *.c && ./a.out && rm a.out'

mkcd() { mkdir -p "$1" && cd "$1";}  
