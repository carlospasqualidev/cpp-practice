# C++ Practice Repository

This repository is dedicated to practicing C++ programming. It contains various exercises, examples, and simple projects to help improve and reinforce skills in the C++ language. Ideal for beginners and developers looking to review both fundamental and advanced C++ concepts.

Este repositório é dedicado à prática de programação em C++. Ele contém diversos exercícios, exemplos e projetos simples para ajudar a melhorar e reforçar habilidades na linguagem C++. Ideal para iniciantes e desenvolvedores que desejam revisar conceitos fundamentais e avançados de C++.

---

## English

### Installation Guide

Follow these steps to set up your environment for practicing C++ using Visual Studio Code and MinGW-x64 on Windows.

#### Step 1: Install the C++ Extension for Visual Studio Code

First, you need to install the C++ extension in Visual Studio Code. This extension is called **C/C++**. You can find it in the Visual Studio Code Marketplace by searching for "C/C++" or by using the link below:

[C/C++ Extension for VS Code](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)

#### Step 2: Install MinGW-x64 (Windows Demonstration)

Next, you will install MinGW-x64, which provides the necessary compilers and tools for C++ development.

1. Download and install MinGW-x64. During installation, it's recommended to use the default installation path.
2. After installation, open the MinGW terminal and run the following command to install the necessary packages:

   ```bash
   pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
   ```

3. Press **Enter** to accept the default options for all packages, then type **Y** and press **Enter** to download and install everything.

#### Step 3: Configure Environment Variables

1. Open Windows Settings and search for **Edit environment variables for your account**.
2. Select the `PATH` variable and click on **New** to add a new entry.
3. Paste the installation path of MinGW-x64. If you used the default path, it should be:

   ```
   C:\msys64\ucrt64\bin
   ```

4. Click **OK** to save your changes.

#### Step 4: Configure Visual Studio Code

Now that everything is installed, you can start using Visual Studio Code to run C++ programs. Below are two images to help you set up the C++ environment in VS Code:

- Run Button in VS Code:

  ![Run Button](https://code.visualstudio.com/assets/docs/languages/cpp/run-play-button.png)

- Selecting the GCC Compiler:

  ![Select GCC Compiler](https://code.visualstudio.com/assets/docs/languages/cpp/select-gcc-compiler.png)

Follow these steps, and you'll be ready to start coding in C++!

---

## Português (Brasil)

### Guia de Instalação

Siga esses passos para configurar seu ambiente para praticar C++ usando Visual Studio Code e MinGW-x64 no Windows.

#### Passo 1: Instalar a Extensão C++ para Visual Studio Code

Primeiro, você precisa instalar a extensão de C++ no Visual Studio Code. Esta extensão se chama **C/C++**. Você pode encontrá-la na Visual Studio Code Marketplace pesquisando por "C/C++" ou usando o link abaixo:

[Extensão C/C++ para VS Code](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)

#### Passo 2: Instalar MinGW-x64 (Demonstração no Windows)

Em seguida, você vai instalar o MinGW-x64, que fornece os compiladores e ferramentas necessários para o desenvolvimento em C++.

1. Baixe e instale o MinGW-x64. Durante a instalação, é recomendado usar o caminho de instalação padrão.
2. Após a instalação, abra o terminal do MinGW e execute o seguinte comando para instalar os pacotes necessários:

   ```bash
   pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
   ```

3. Pressione **Enter** para aceitar as opções padrão para todos os pacotes, depois digite **Y** e pressione **Enter** para baixar e instalar tudo.

#### Passo 3: Configurar Variáveis de Ambiente

1. Abra as Configurações do Windows e procure por **Editar variáveis de ambiente para sua conta**.
2. Selecione a variável `PATH` e clique em **Novo** para adicionar uma nova entrada.
3. Cole o caminho de instalação do MinGW-x64. Se você usou o caminho padrão, ele deve ser:

   ```
   C:\msys64\ucrt64\bin
   ```

4. Clique em **OK** para salvar suas alterações.

#### Passo 4: Configurar o Visual Studio Code

Agora que tudo está instalado, você pode começar a usar o Visual Studio Code para rodar programas em C++. Abaixo estão duas imagens para ajudar você a configurar o ambiente de C++ no VS Code:

- Botão de Executar no VS Code:

  ![Botão de Executar](https://code.visualstudio.com/assets/docs/languages/cpp/run-play-button.png)

- Selecionando o Compilador GCC:

  ![Selecionar Compilador GCC](https://code.visualstudio.com/assets/docs/languages/cpp/select-gcc-compiler.png)

Siga esses passos e você estará pronto para começar a programar em C++!
